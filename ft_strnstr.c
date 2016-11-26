/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 20:21:27 by tfontain          #+#    #+#             */
/*   Updated: 2016/11/19 02:23:29 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t		k;

	k = 0;
	if (*big == 0 && *little != 0)
		return (NULL);
	if (*big != 0 && *little != 0)
	{
		while (big[k] != '\0'
				&& ft_strncmp(big + k, little, ft_strlen(little) - 1) != 0)
		{
			if (k == (n - ft_strlen(little)))
				return (NULL);
			++k;
		}
		if (big[k] == '\0')
			return (NULL);
	}
	return ((char*)big + k);
}
