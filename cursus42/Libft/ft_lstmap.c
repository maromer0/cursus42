/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:24 by maromero          #+#    #+#             */
/*   Updated: 2022/11/29 16:27:55 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*list;

	if (lst == NULL)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (new_list == NULL)
		return (NULL);
	list = new_list;
	while (lst)
	{
		if (lst->next)
		{
			new_list->next = ft_lstnew(f(lst->next->content));
			if (!new_list->next)
			{
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			new_list = new_list->next;
		}
		lst = lst->next;
	}
	new_list->next = NULL;
	return (list);
}
