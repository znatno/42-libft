/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 22:40:38 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 22:41:25 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	char	*str;

	if (s)
	{
		str = ft_strnew(ft_strlen(s));
		if (str)
		{
			res = str;
			while (*s)
			{
				*str = f(*s);
				s++;
				str++;
			}
			return (res);
		}
	}
	return (NULL);
}
