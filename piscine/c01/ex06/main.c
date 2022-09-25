/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:42:22 by maromero          #+#    #+#             */
/*   Updated: 2022/07/14 17:36:27 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		c;

	str = "Hola Mundo";
	c = 0;
	printf("numero de caracteres: %d", ft_strlen(str));
	return (0);
}
