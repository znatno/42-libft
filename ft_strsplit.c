/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 22:49:58 by ibohun            #+#    #+#             */
/*   Updated: 2019/01/13 22:50:15 by ibohun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (!s || !*s)
		return (0);
	if (s[0] != c)
		nb = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			nb++;
		i++;
	}
	return (nb);
}

static char	*ft_putword(char const *s, char c)
{
	char	*word;
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	word = ft_strnew(++i);
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_count_words(s, c);
	arr = (char **)malloc((j + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < j)
	{
		while (*s == c)
			s++;
		arr[i] = ft_putword(s, c);
		while (*s != c && *s != '\0')
			s++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
