/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:04:04 by maromero          #+#    #+#             */
/*   Updated: 2023/08/25 20:06:56 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*str;

	fd = open("prueba.txt", O_RDONLY);
	str = get_next_line(fd);
	while (str != NULL)
	{
		printf("cadena leida: %s", str);
		str = get_next_line(fd);
	}
	close (fd);
	return (0);
}
