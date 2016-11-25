/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 00:13:49 by tfontain          #+#    #+#             */
/*   Updated: 2016/11/24 22:07:44 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_nextchar(char const *s, char c)
{
	size_t		k;

	k = 0;
	while (s[k] && s[k] != c)
		++k;
	return (k);
}

static	size_t	ft_count_words(char const *s, char c)
{
	size_t		k;

	k = 0;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			++k;
		++s;
	}
	return (k);
}
/*
char			**ft_strsplit(char const *s, char c)
{
	char			**ret;
	char			**ptstr;

	if ((ptstr = malloc(ft_count_words(s, c))) == NULL)
		return (NULL);
	ret = ptstr;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
		{
			*ptstr = ft_strsub(s, 0, ft_nextchar(s, c));
			++ptstr;
		}
		++s;
	}
	return (ret);
}*/

char			**ft_strsplit(char const *s, char c)
{
	char		**pts;
	char		**ret;

	if ((pts = malloc(ft_count_words(s, c))) == NULL)
		return (NULL);
	ret = pts;
	while (*s)
	{
		while (*s == c)
			++s;
		*pts = ft_strsub(s, 0, ft_nextchar(s, c));
		++pts;
		while (*s && *s != c)
			++s;
	}
	return (ret);
}




