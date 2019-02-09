/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 22:39:33 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 22:40:00 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = NULL;
	if (s1 && s2)
	{
		new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (new)
		{
			new = ft_strcat(new, s1);
			new = ft_strcat(new, s2);
		}
	}
	return (new);
}
