/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:10:41 by maromero          #+#    #+#             */
/*   Updated: 2023/02/12 18:15:43 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_index(va_list arg, char *str, size_t *i)
{
	if (*str == 'c')
		ft_print_char(va_arg(arg, int), i);
	else if (*str == 's')
		ft_print_str(va_arg(arg, char *), i);
	else if (*str == '%')
		ft_print_char(*str, i);
	else if ((*str == 'd') || (*str == 'i'))
		ft_print_num(va_arg(arg, int), i);
	else if (*str == 'u')
		ft_print_unsig(va_arg(arg, int), i);
	else if (*str == 'x')
		ft_print_hex(va_arg(arg, unsigned int), i);
	else if (*str == 'X')
		ft_print_uhex(va_arg(arg, int), i);
	else if (*str == 'p')
		ft_print_mem(va_arg(arg, unsigned long int), i);
}

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	size_t	i;

	i = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_index(arg, (char *)str, &i);
		}
		else
			ft_print_char(*str, &i);
		str++;
		if (!str)
		{
			str = "(null)";
			va_end(arg);
		}
	}
	va_end(arg);
	return (i);
}