
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	s = (char *)ft_memalloc(++size);
	return (s);
}
