/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:43:24 by maromero          #+#    #+#             */
/*   Updated: 2022/07/14 19:12:15 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	j = size - 1;
	while (i != (size / 2))
	{
		s = tab[i];
		tab[i] = tab[j];
		tab[j] = s;
		j--;
		i++;
	}
}
