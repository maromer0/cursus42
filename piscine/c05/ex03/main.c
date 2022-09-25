/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:44:33 by maromero          #+#    #+#             */
/*   Updated: 2022/07/25 21:55:01 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_recursive_power(0, 3));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(1, 0));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(7, 3));
	printf("%d\n", ft_recursive_power(-5, 4));
	return (0);
}
