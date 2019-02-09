/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:09:10 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 22:44:54 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *to_find)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!ft_strlen(to_find))
		return ((char *)s);
	while (*s)
	{
		while (to_find[i])
		{
			if (s[i] != to_find[i])
				j = 1;
			i++;
		}
		if (j == 0)
			return ((char*)s);
		i = 0;
		j = 0;
		s++;
	}
	return (0);
}
