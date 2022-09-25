/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:19:49 by maromero          #+#    #+#             */
/*   Updated: 2022/07/18 19:13:27 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *tab, int i, int j)
{
	int	s;

	s = tab[i];
	tab[i] = tab[j];
	tab[j] = s;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	j = 0;
	min = tab[i];
	while (j < size)
	{
		while (i < size)
		{
			if (tab[i] < min)
			{
				min = tab[i];
				ft_swap(tab, i, j);
			}
			i++;
		}
		i = j + 1;
		min = tab[i];
		j++;
	}
}
