/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:43:19 by maromero          #+#    #+#             */
/*   Updated: 2022/11/17 17:47:46 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = b;
	while (len-- >= 1)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	str[] = "this is string";
	
	printf("%s\n", ft_memset(str, 32, 10));
	printf("%s\n", memset(str, 32, 20));
}*/