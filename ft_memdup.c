/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 10:04:06 by tfontain          #+#    #+#             */
/*   Updated: 2017/03/16 10:08:07 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void			*ft_memdup(const char *s, size_t len)
{
	void		*ret;

	if ((ret = malloc(len)) == NULL)
		return (NULL);
	ft_memmove(ret, s, len);
	return (ret);
}
