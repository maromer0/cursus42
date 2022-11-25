/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maromero <maromero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:32:48 by maromero          #+#    #+#             */
/*   Updated: 2022/11/17 17:43:13 by maromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*asigna la memoria requerida, la deja vacía y devuelve un puntero a ella*/

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*emptymem;
	size_t	result;

	result = nitems * size;
	emptymem = (void *)malloc(result);
	if (!emptymem)
		return (0);
	ft_bzero(emptymem, result);
	return (emptymem);
}
