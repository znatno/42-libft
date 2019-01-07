
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (res)
		ft_memset(res, '\0', size);
	return (res);
}
