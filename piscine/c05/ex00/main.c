/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:22:33 by maromero          #+#    #+#             */
/*   Updated: 2022/07/27 20:21:55 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb;
	int	res;

	nb = 0;
	res = ft_iterative_factorial(nb);
	printf ("%d\n", res);
}
