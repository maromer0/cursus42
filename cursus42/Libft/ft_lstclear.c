#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while(*list != NULL)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
}