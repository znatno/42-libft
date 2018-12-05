
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return ((char*)s);
	while (*s)
	{
		s++;
		if (*s == c)
			return ((char*)s);
	}
	return (0);
}
