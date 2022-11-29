/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:05:26 by maromero          #+#    #+#             */
/*   Updated: 2022/11/29 15:05:27 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* añade el nodo new al principio de la lista */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
