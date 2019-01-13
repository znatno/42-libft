#include "libft.h"

int	ft_sqrt(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		return (0);
	while (++i <= n)
		if ((i * i) == n)
			return (i);
	return (0);
}
