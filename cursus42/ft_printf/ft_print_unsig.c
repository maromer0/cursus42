/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:30:11 by maromero          #+#    #+#             */
/*   Updated: 2023/03/02 11:46:42 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsig(unsigned int n, size_t *i)
{
	if (n < 0)
		n = -n;
	if (n >= 10)
	{
		ft_print_unsig((n / 10), i);
		n = n % 10;
	}
	if (n < 10)
		ft_print_char(n + 48, i);
}
