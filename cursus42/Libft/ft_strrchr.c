/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:12:44 by maromero          #+#    #+#             */
/*   Updated: 2022/10/26 12:35:35 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s) + 1;
	while (len--)
	{
		if (*(s + len) == (char)c)
			return ((char *)(s + len));
	}
	return (0);
}
/*
int	main(void)
{
	char	*str;

	str = "bonjour";
	printf("%s\n", ft_strrchr(str, 'b'));
	printf("%s", strrchr(str, 'b'));
}*/
