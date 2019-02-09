/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:14:55 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 22:20:25 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getnb(char const *s, int i, int sym, int nb)
{
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (9223372036854775807 - nb < s[i] - '0')
		{
			if (sym == -1)
				return (0);
			else
				return (-1);
		}
		nb = nb * 10 + s[i] - '0';
		i++;
	}
	if (sym == -1)
		nb = -nb;
	return (nb);
}

int			ft_atoi(char const *s)
{
	int	nb;
	int	sym;
	int	i;

	nb = 0;
	sym = 1;
	i = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sym = -1;
		i++;
	}
	return (getnb(s, i, sym, nb));
}
