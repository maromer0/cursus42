/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:49:09 by maromero          #+#    #+#             */
/*   Updated: 2022/11/29 12:51:47 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*copia una string en una memoria reservada por malloc*/

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	len = 0;
	while (s[len])
	{
		str[len] = s[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}

// int main(void)
// {
// 	printf("%s\n", ft_strdup(""));
// 	return(0);
// }