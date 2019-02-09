/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 22:43:31 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 23:01:05 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
