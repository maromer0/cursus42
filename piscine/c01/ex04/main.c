/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:59:14 by maromero          #+#    #+#             */
/*   Updated: 2022/07/12 21:08:23 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 107;
	b = 3;
	printf("Parametro a: %d\nParametro b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Div: %d\nMod: %d\n", a, b);
	return (0);
}
