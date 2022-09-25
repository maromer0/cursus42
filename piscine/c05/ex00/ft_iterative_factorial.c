/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:20:42 by maromero          #+#    #+#             */
/*   Updated: 2022/07/27 20:21:44 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;
	int	i;

	num = 1;
	i = nb;
	if (nb >= 0)
	{
		while (i > 1)
		{
			num = num * i;
			i--;
		}
		return (num);
	}
	return (0);
}
