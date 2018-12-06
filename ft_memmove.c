
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	unsigned char	*sr;
	unsigned char	*ds;

	sr = (unsigned char *)src;
	ds = (unsigned char *)dst;
	i = -1;
	if (sr < ds)
		while ((int)(--len) >= 0)
			ds[len] = sr[len];
	else
		while (++i < len)
			ds[i] = sr[i];
	return (dst);
}
