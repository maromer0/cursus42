/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:12:44 by maromero          #+#    #+#             */
/*   Updated: 2022/09/23 11:57:19 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	printf("%zu\n", len);
	while (len >= 0)
	{
		if (*(s + len) == c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}

int	main(void)
{
	char	*str;

	str = "xola que tal estas";
	printf("%s\n", ft_strrchr(str, ' '));
	printf("%s", strrchr(str, ' '));
}
