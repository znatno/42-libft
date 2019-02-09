/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 22:27:48 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 22:27:51 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*result(char *s, long n, int i)
{
	s[i--] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		s[i--] = 48 + (n % 10);
		n = n / 10;
	}
	return (s);
}

char		*ft_itoa(int nb)
{
	char	*s;
	long	n;
	int		i;

	n = nb;
	i = len(n);
	if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	return (result(s, n, i));
}
