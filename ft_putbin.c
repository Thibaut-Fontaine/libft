/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 16:21:44 by tfontain          #+#    #+#             */
/*   Updated: 2017/02/21 16:57:27 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

/*
** display a string in binary, with mpl bytes displayed per line
** if mpl = 0, there is no maximum (all bytes are displayed in one line)
*/

void			ft_putbin(const unsigned char *s, size_t len, size_t mpl)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		ft_putstr(ft_bytobi(s[i]));
		++i;
		if (mpl != 0 && i % mpl == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
	}
}
