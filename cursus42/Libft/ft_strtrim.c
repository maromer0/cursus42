/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:51:03 by maromero          #+#    #+#             */
/*   Updated: 2022/11/17 17:51:12 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* borra caracteres de s1 por delante y detras
de set hasta encontrar un valor que no este en set */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len]) && len != 0)
		len--;
	return (ft_substr((char *)s1, 0, (len + 1)));
}
