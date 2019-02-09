/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 22:42:06 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 22:42:18 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = -1;
	if (s)
	{
		str = ft_strnew(ft_strlen(s));
		if (str)
		{
			while (s[++i])
				str[i] = f(i, s[i]);
			return (str);
		}
	}
	return (NULL);
}
