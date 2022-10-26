/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:59:06 by maromero          #+#    #+#             */
/*   Updated: 2022/10/26 12:46:13 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	str1;
	unsigned char	str2;

	while (n-- > 0)
	{
		str1 = *(unsigned char *)s1++;
		str2 = *(unsigned char *)s2++;
		if (str1 != str2)
			return (str1 - str2);
		if (str1 == '\0')
			return (0);
	}
	return (0);
}
/*
int	main(void)
{
	int		ret;
	int t;
	char s1[] = "abcdef";
	char s2[] = "abc\xfdxx";

	t = ft_strncmp(s1, s2, 7);
	printf("%d\n", t);
	ret = ft_strncmp(s1, s2, 7);
	if (ret < 0)
	{
		printf("str1 menor str2");
	}
	else if (ret > 0)
	{
		printf("str1 mayor str2");
	}
	else
	{
		printf("str1 igual str2");
	}
	return (0);
}*/
