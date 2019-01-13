#include "libft.h"

int	ft_pow(int n, int m)
{
	int	i;
	int	s;

	i = 0;
	s = n;
	if (n == 1 || m == 0)
		return (1);
	while (++i < m)
		n *= s;
	return (n);
}
