/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:52:10 by maromero          #+#    #+#             */
/*   Updated: 2022/11/17 19:52:36 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* reserva memoria y devuelve una substring de la string
principal desde start con longitud len */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (ft_strlen((char *)s) < start)
		return (ft_strdup(""));
	if (!(substr = (void *)malloc(result)))
        return (0);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/*int main(void)
{
	printf("%s\n", ft_substr("hola que tal, mi nombre es manuel", 14, 18446744073709551615));
	return (0);
}*/