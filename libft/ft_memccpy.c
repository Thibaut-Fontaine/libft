/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:23:41 by tfontain          #+#    #+#             */
/*   Updated: 2016/11/22 14:39:45 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		k;

	k = 0;
	while (k != n && (*((unsigned char*)src + k) != (unsigned char)c))
	{
		*((unsigned char*)dest + k) = *((unsigned char*)src + k);
		++k;
	}
	if (*((unsigned char*)src + k) == (unsigned char)c)
	{
		*((unsigned char*)dest + k) = (unsigned char)c;
		return (dest + k + 1);
	}
	return (NULL);
}
