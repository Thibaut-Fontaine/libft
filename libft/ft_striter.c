/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:25:23 by tfontain          #+#    #+#             */
/*   Updated: 2016/11/20 19:51:04 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_striter(char *s, void (*f)(char *))
{
	if (s != NULL)
	{
		while (*s != 0)
		{
			f(s);
			++s;
		}
	}
}
