/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:24:13 by maromero          #+#    #+#             */
/*   Updated: 2022/09/29 18:59:48 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	result;

	result = 0;
	i = 0;
	s = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - 48) + (result * 10);
		i++;
	}
	return (result * s);
}
/*
int	main(void)
{
	char	*str;

	str = " 10+1234	hola c+-+234omo";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}*/
