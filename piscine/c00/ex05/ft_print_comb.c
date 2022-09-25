/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:43:20 by maromero          #+#    #+#             */
/*   Updated: 2022/07/09 19:52:48 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c, char d, char u)
{
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &u, 1);
	if (c != '7' || d != '8' || u != '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	u = '0';
	d = '0';
	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				if (u != d && u != c && d != c)
				{
					ft_putchar(c, d, u);
				}
				u++;
			}
			d++;
		}
		c++;
	}
}
