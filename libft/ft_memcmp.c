/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:41:03 by tfontain          #+#    #+#             */
/*   Updated: 2016/11/22 14:41:05 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		k;

	k = 0;
	while (*((const unsigned char*)s1 + k) == *((const unsigned char*)s2 + k)
			&& k < n - 1)
		++k;
	return (*((const unsigned char*)s1 + k) - *((const unsigned char*)s2 + k));
}
