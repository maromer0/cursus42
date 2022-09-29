/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:08:19 by maromero          #+#    #+#             */
/*   Updated: 2022/09/29 17:48:30 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_d;
	unsigned int	size_s;

	i = ft_strlen(dest);
	j = 0;
	size_d = ft_strlen(dest);
	size_s = ft_strlen(src);
	if (size < 1)
	{
		return (size_s);
	}
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < size_d)
		return (size_s + size);
	else
		return (size_s + size_d);
}
