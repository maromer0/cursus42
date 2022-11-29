/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:08:17 by maromero          #+#    #+#             */
/*   Updated: 2022/11/29 15:08:19 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*devuelve la cantidad de nodos de una lista */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
