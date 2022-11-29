/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:36:41 by maromero          #+#    #+#             */
/*   Updated: 2022/11/29 16:12:10 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* devuelve el último nodo */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL)
		lst = lst->next;
	return (lst);
}
