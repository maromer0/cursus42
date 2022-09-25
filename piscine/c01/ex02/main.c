/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:08:52 by maromero          #+#    #+#             */
/*   Updated: 2022/07/12 20:40:32 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a1, int *a2);

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 3;
	printf("valor inicial a: %d\nvalor inicial b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("valor final a: %d\nvalor final b: %d\n", a, b);
	return (0);
}
