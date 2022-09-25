/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:47:14 by maromero          #+#    #+#             */
/*   Updated: 2022/07/12 20:57:29 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 22;
	b = 3;
	printf("Parametro a: %d\nParametro b: %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("Div: %d\nMod: %d\n", div, mod);
	return (0);
}
