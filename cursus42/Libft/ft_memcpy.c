/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:58:53 by maromero          #+#    #+#             */
/*   Updated: 2022/10/04 17:51:05 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (!d && !s)
		return (0);
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[] = "hola";
	char	src[] = "hey que tal estas";

	printf("%s\n", ft_memcpy(dst, src, 17));
	return (0);
}*/
