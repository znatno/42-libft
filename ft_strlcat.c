/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 22:40:07 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 22:40:23 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		s;
	size_t		d;
	size_t		r;
	const char	*sr;

	sr = src;
	s = ft_strlen(src);
	d = ft_strlen(dst);
	r = d;
	if (dstsize < d)
		return (dstsize + s);
	while (dstsize - 1 > d && *sr)
	{
		dst[d] = *sr;
		sr++;
		d++;
	}
	dst[d] = '\0';
	return (s + r);
}
