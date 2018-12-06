
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*tmp;
	char	t;
	size_t	i;

	tmp = (char *)s;
	t = (char)c;
	i = -1;
	while (++i < n)
		if (tmp[i] == t)
			return (tmp + i);
	return (0);
}
