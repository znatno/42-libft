
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	while (*s)
		s++;
	while (s >= tmp)
	{
		if (*s == c)
			return ((char*)s);
		s--;
	}
	return (0);
}
