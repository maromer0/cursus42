/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:44:04 by maromero          #+#    #+#             */
/*   Updated: 2022/07/27 20:27:08 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(7, 3));
	printf("%d\n", ft_iterative_power(-5, -4));
	return (0);
}
