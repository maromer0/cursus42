/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:56:34 by maromero          #+#    #+#             */
/*   Updated: 2022/11/17 18:18:01 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*copia src en destino una cantidad de len caracteres*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src || !len)
		return (dst);
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*((char *)dst + len - 1) = *((char *)src + len - 1);
			len--;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	dst[] = "destino es menor";
	char	src[] = "fuente es mayor que destino";

	printf("%s\n", ft_memmove(dst, src, 25));
	return (0);
}*/