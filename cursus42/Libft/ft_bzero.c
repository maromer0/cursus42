/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:24:06 by maromero          #+#    #+#             */
/*   Updated: 2022/09/29 17:47:51 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = s;
	while (n-- >= 1)
	{
		str[i] = '\0';
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "this is string";
	
	printf("%s\n", ft_bzero(str, 0));
}
*/