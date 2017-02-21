/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 16:53:32 by tfontain          #+#    #+#             */
/*   Updated: 2017/02/21 16:57:44 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void			ft_puthex(const unsigned char *s, size_t len, size_t mpl)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		ft_putstr(ft_bytohex(s[i]));
		++i;
		if (mpl != 0 && i % mpl == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
	}
}
