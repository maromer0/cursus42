/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:30:28 by maromero          #+#    #+#             */
/*   Updated: 2023/03/02 11:39:21 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uhex(unsigned int n, size_t *i)
{
	char	str[25];
	char	*hex;
	int		j;

	hex = "0123456789ABCDEF";
		j = 0;
	if (n == 0)
	{
		ft_print_char('0', i);
		return ;
	}
	while (n != 0)
	{
		str[j] = hex[n % 16];
		n = n / 16;
		j++;
	}
	while (j--)
		ft_print_char(str[j], i);
}
