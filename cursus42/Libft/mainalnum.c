/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainalnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:20:55 by maromero          #+#    #+#             */
/*   Updated: 2022/09/23 20:21:26 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	c;

	c = 'Z';
	if (ft_isalpha(c) == 1)
		printf("alpha");
	else
		printf("No alpha");
	return (0);
}
