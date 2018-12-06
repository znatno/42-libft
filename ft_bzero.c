
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)s;
	if (n > 0)
	{
		while (n-- > 0)
			*p++ = 0;
	}
}
