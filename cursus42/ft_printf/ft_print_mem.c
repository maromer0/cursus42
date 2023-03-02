/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:31:02 by maromero          #+#    #+#             */
/*   Updated: 2023/03/02 11:39:28 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_memhex(unsigned long int n, size_t *i)
{
	char	str[25];
	char	*hex;
	int		j;

	hex = "0123456789abcdef";
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

void	ft_print_mem(unsigned long int n, size_t *i)
{
	ft_print_char('0', i);
	ft_print_char('x', i);
	ft_print_memhex(n, i);
}
