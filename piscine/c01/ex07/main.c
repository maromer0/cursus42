/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 21:44:00 by maromero          #+#    #+#             */
/*   Updated: 2022/07/19 20:29:37 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int i = 0;
	int	tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	size = 10;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("array ordenado: %d\n", tab[i]);
		i++;
	}
	return (0);
}
