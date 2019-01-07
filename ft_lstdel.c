#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst && alst && del)
	{
		while ((*alst)->next)
			ft_lstdelone(&(*alst)->next, del);
		ft_lstdelone(&(*alst), del);
	}
}
