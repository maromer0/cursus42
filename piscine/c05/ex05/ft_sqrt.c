/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:03:57 by maromero          #+#    #+#             */
/*   Updated: 2022/07/27 21:52:08 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	num;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < 46341)
	{
		num = i * i;
		if (num == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
