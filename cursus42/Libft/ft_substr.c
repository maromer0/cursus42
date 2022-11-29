/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:52:10 by maromero          #+#    #+#             */
/*   Updated: 2022/11/29 14:24:57 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* reserva memoria y devuelve una substring de la string
principal desde start con longitud len */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len_str;

	if (s == NULL)
		return (NULL);
	len_str = ft_strlen(s);
	if (len > len_str)
		len = len_str;
	if (start > len_str)
		return (ft_strdup(""));
	if (len_str - start >= len)
		str = (char *)malloc((len + 1) * sizeof(char));
	else
		str = (char *)malloc((len_str - start + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (s + start), (len + 1));
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_substr("hola", 2, 3));
	return (0);
}*/