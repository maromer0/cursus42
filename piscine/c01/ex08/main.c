/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:23:22 by maromero          #+#    #+#             */
/*   Updated: 2022/07/18 19:07:29 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10] = {5, 2, 4, 3, 84, 34, 22, 19, 66, 39};
	int	size = 10;
	int	i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("array ordenado: %d\n", tab[i]);
		i++;
	}
}
