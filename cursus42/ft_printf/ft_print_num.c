/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:30:49 by maromero          #+#    #+#             */
/*   Updated: 2023/03/02 11:39:26 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_num(int n, size_t *i)
{
	if (n == -2147483648)
	{
		ft_print_num((n / 10), i);
		ft_print_char('8', i);
	}
	else if (n < 0)
	{
		ft_print_char('-', i);
		ft_print_num(-n, i);
	}
	else
	{
		if (n >= 10)
			ft_print_num((n / 10), i);
		ft_print_char(('0' + n % 10), i);
	}
}
