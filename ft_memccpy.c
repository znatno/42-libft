/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:14:36 by ibohun            #+#    #+#             */
/*   Updated: 2018/10/26 15:45:39 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
			const void *restrict src, int c, size_t n)
{
	size_t	i;
	char	*sr;
	char	*ds;
	char	ch;

	sr = (char *)src;
	ds = (char *)dst;
	ch = (char)c;
	i = -1;
	while (++i < n)
	{
		ds[i] = sr[i];
		if (ds[i] == ch)
			return (dst + (++i));
	}
	return (0);
}
