/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:03:40 by maromero          #+#    #+#             */
/*   Updated: 2023/09/06 19:00:27 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_update_memory(char *memory)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (memory[i] != '\0' && memory[i] != '\n') 		//buscamos la posicion de un salto de linea o final de cadena
		i++;
	if (!memory[i])		//si memory esta vacio se termina la funcion
	{
		free(memory);
		return (0);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(memory) - i + 1));	//reservamos memoria a partir del salto de linea
	if (!str)		//si no se ha podido reservar se termina la funcion
	{
		free(str);
		return (0);
	}
	i++;	//coloca i en el caracter despues del salto de linea
	while (memory[i])	//copia memory despues del salto de linea en una nueva variable str
		str[j++] = memory[i++];
	str[j] = '\0';
	free(memory);
	return (str);
}

//esta funcion busca un posible salto de linea en los datos almacenados en memory para devolver la cadena de texto
//hasta el salto de linea incluyendo este ultimo.
char	*ft_return_line(char *memory)
{
	int		i;
	char	*str;

	i = 0;
	if (!memory[i])		//comprobar que memory no esta vacio
		return (0);
	while (memory[i] && memory[i] != '\n')		//actualizar i hasta que termine memory o encuentre un salto de linea \n
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));		//reserva la memoria, +2 porque i empieza en 0 y necesitas para \n
	if (!str)		//si no se ha podido reservar termina la funcion
		return (0);
	i = 0;
	while (memory[i] && memory[i] != '\n')	//copia memory en str hasta que termine memory o encuentre un salto de linea
	{
		str[i] = memory[i];
		i++;
	}
	if (memory[i] && memory[i] == '\n')	//si memory tiene datos y contiene un salto de linea en la posicion i, copia el salto de linea
	{
		str[i] = '\n';
		i++;
	}
	str [i] = '\0';	//añade la terminacion a la cadena str
	return (str);
}

//esta funcion lee el fd hasta un salto de linea y lo almacena en la variable estatica memory, devolviendo esta misma.
char	*ft_memory_read(int fd, char *memory)
{
	char	*store;		//almacenar leido
	int		byte;		//numero de bits leidos

	byte = 1;
	store = malloc((BUFFER_SIZE + 1) * sizeof(char));	//reserva memoria
	if (!store)	//si no se ha podido reservar la memoria termina la funcion
		return (0);
	//este bucle lee el fd y lo almacena en store, y lo concatena con memory. Si encuentra un salto de linea termina la funcion
	//y devuelve memory con store concatenado.
	while (byte > 0)
	{
		//read(filedescriptor, buffer desde donde se leen los datos, tamaño de buffer)
		byte = read(fd, store, BUFFER_SIZE);	//numero de bytes leidos y almacenar los datos leidos en store
		if (byte == -1)	// error o proceso interrumpido
		{
			free(store);	//libera memoria y termina funcion
			free(memory);
			return (0);
		}
		store[byte] = '\0';
		memory = ft_strjoin(memory, store); //concatena memory y store
		if (ft_strchr(store, '\n'))		//busca en store \n(salto de linea) y si lo encuentra termina el bucle
			break ;
	}
	free(store);	//libera la memoria reservada de store
	return (memory);	//devuelve la cadena concatenada entre memoria y lo leido
}

char	*get_next_line(int fd)
{
	//la variable estática cambia su valor cuando se ejecuta el programa pero lo mantiene aunque termine la función
	static char	*memory;
	char		*return_line;

	//si no hay fd o el buffer es menor o igual que 0 se termina el programa
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	//lee el documento y guarda lo leido en memory
	memory = ft_memory_read(fd, memory);
	if (!memory)
		return (0);
	//busca en memory el salto de linea y crea una nueva cadena hasta este mismo
	return_line = ft_return_line(memory);
	//busca en memory el salto de linea y lo actualiza para que el siguiente caracter despues del salto de linea
	//sea el comienzo de memory actualizado
	memory = ft_update_memory(memory);
	return (return_line);
}
