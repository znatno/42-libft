#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *tmp;

	if (lst && f)
	{
		tmp = f(lst);
		res = tmp;
		while (lst->next)
		{
			lst = lst->next;
			tmp->next = f(lst);
			if (tmp->next)
				tmp = tmp->next;
		}
		return (res);
	}
	return (NULL);
}
