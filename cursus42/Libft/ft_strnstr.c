/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:46:09 by maromero          #+#    #+#             */
/*   Updated: 2022/10/06 18:04:59 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;

	if (*needle == '\0')
		return ((char *)haystack);
	pos = ft_strlen(needle);
	while (*haystack && len-- >= pos)
	{
		if (ft_strncmp(haystack, needle, len) == 0 && *haystack == *needle)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "hola que tal estas";
	char s2[] = "que";

	printf("%s\n", ft_strnstr(s1, s2, 10));
	return (0);
}*/
