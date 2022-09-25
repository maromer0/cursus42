/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:06:38 by maromero          #+#    #+#             */
/*   Updated: 2022/07/18 17:56:45 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_errorcheck(int argc, char *argv)
{
	int	c;

	c = 0;
	printf("número de argumentos: %d\n", argc);
	printf("cadena %s\n", argv);
	while (argv[c] != '\0')
	{
		if (('1' < argv[c] && argv[c] > '4') || argc != 2)
		{
			write(1, "Errorarg\n", 9);
			return (1);
		}
		if ((c % 2 == 1) && argv[c] != ' ')
		{
			write(1, "Errorspace\n", 11);
			return (1);
		}
	c++;
	}
	if (c != 31)
	{
		write(1, "Errorbyte\n", 10);
		return (1);
	}
	return (0);
}

int	ft_view_row(int size, char *row)
{
	int		i;
	char	check;
	char	c;

	i = 1;
	check = row[0];
	c = '1';
	while (i < size)
	{
		if (row[i] > check)
		{
			check = row[i];
			c++;
		}
		i++;
	}
	return (c);
}

void	ft_reverse_row(int size, char *row)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		s = row[i];
		row[i] = row[j];
		row[j] = s;
		j--;
		i++;
	}
}
