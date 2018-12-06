
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;
	size_t		i;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = -1;
	while (++i < n)
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
	return (0);
}
