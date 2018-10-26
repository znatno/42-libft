/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 17:14:55 by ibohun            #+#    #+#             */
/*   Updated: 2018/10/26 20:23:18 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *s)
{
	int nb;
	int sym;

	nb = 0;
	sym = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
	{
		s++;
	}
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sym = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		nb *= 10;
		nb += *s - '0';
		s++;
	}
	return (nb * sym);
}
