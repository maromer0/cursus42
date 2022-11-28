#include"libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (*list != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}