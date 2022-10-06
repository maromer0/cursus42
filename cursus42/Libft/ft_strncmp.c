/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:59:06 by maromero          #+#    #+#             */
/*   Updated: 2022/10/06 19:04:52 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while ((s1[c] == s2[c]) && (s1[c] != '\0')
		&& (s2[c] != '\0') && (c < n - 1))
	{
		c++;
	}
	return (s1[c] - s2[c]);
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
