/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:37:03 by maromero          #+#    #+#             */
/*   Updated: 2022/11/17 17:38:33 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* transforma un numero entero a una string */

#include"libft.h"

static size_t	ft_count(int n)
{
	size_t	count;

	count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_write(char *str, unsigned int n)
{
	if (n < 10)
		*str = n + '0';
	else
	{
		*str = n % 10 + '0';
		ft_write(str - 1, n / 10);
	}
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*result;
	size_t			len;

	num = n;
	if (n == 0)
		return (ft_strdup("0"));
	else
	{
		len = n < 0 ? ft_count(n) + 1 : ft_count(n);
		if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
		ft_write((result + len - 1), n < 0 ? -num : num);
		if (n < 0)
			*result = '-';
		result[len] = '\0';
	}
	return (result);
}

/* int main (void)
{
	printf("%s\n", ft_itoa(100));
	return (0);
} */