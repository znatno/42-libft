/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:09:10 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 22:45:17 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!ft_strlen(to_find))
		return ((char *)s);
	while (*s && ft_strlen(to_find) <= len)
	{
		while (to_find[i])
		{
			if (s[i] != to_find[i])
				j = 1;
			i++;
		}
		if (j == 0)
			return ((char*)s);
		len--;
		i = 0;
		j = 0;
		s++;
	}
	return (0);
}
