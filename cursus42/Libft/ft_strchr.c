/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:43:42 by maromero          #+#    #+#             */
/*   Updated: 2022/11/29 14:52:46 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_str;

	c_str = c;
	while (*s != '\0')
	{
		if (*s == c_str)
			return ((char *)s);
		s++;
	}
	if (c_str == '\0')
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	char	*str;

	str = "teste";
	printf("%s", ft_strchr(str, 500));
}*/
