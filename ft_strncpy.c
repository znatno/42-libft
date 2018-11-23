
#include <libft.h>

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
	{
		if (*(src + i))
			*(dest + i) = *(src + i);
		else
			while (i < len)
				*(dest + i++) = '\0';
	}
	return (dest);
}
