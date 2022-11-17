/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:44:25 by maromero          #+#    #+#             */
/*   Updated: 2022/11/17 17:45:28 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*busca un caracter en una cadena y devuelve un puntero a esa parte,
en caso contrario no devuelve nada*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*s;

	s = str;
	while (n-- > 0)
	{
		if (*s == (char)c)
			return ((void *)s);
		s++;
	}
	return (0);
}

/*int	main(void)
{
	char	dst[] = "destino es menor";

	printf("%s\n", ft_memchr(dst, 't', 5));
	return (0);
}*/