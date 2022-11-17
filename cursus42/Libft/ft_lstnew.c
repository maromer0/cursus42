/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:43:49 by maromero          #+#    #+#             */
/*   Updated: 2022/11/17 17:44:04 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* crea un nuevo nodo y lo inicializa */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
