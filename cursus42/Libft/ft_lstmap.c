#include"libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	new_list;
	t_list	list;

	if(!(new_list = ft_lstnew(f(lst->content))))
		return (0);
	list = new_list;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(list.next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		list = list.next;
		lst = lst->next;
	}
	return (result);
}