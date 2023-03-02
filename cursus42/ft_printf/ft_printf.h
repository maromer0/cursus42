/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:17:47 by maromero          #+#    #+#             */
/*   Updated: 2023/03/02 11:38:57 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char const *str, ...);
void	ft_print_char(char c, size_t *i);
void	ft_print_hex(unsigned int n, size_t *i);
void	ft_print_mem(unsigned long int n, size_t *i);
void	ft_print_num(int n, size_t *i);
void	ft_print_str(char *str, size_t *i);
void	ft_print_uhex(unsigned int n, size_t *i);
void	ft_print_unsig(unsigned int n, size_t *i);

#endif