
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	char	*str;
	
	if (s)
	{
		str = ft_strnew(ft_strlen(s));
		if (str)
		{
			res = str;
			while (*s)
			{
				*str = f(*s);
				s++;
				str++;
			}
			return (res);
		}
	}
	return (NULL);
}
