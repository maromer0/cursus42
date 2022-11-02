/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:56:34 by maromero          #+#    #+#             */
/*   Updated: 2022/10/04 15:56:34 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*copia src en destino una cantidad de len caracteres*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char  *sorc;
    char        *dest;

    if (!src && !dst)
        return (0);
    if (dst > src)
    {
        sorc = src + len;
        dest = dst + len;
        while (len-- > 0)
            *--dest = *--sorc;
    }
    else
    {
        sorc = src;
        dest = dst;
        while (len-- > 0)
            *dest++ = *sorc++;
    }
    return (dest);
}

int	main(void)
{
	char	dst[] = "destino es menor";
	char	src[] = "fuente es mayor que destino";

	printf("%s\n", ft_memmove(dst, src, 25));
	return (0);
}