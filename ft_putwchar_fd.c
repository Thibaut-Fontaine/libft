/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 20:15:38 by tfontain          #+#    #+#             */
/*   Updated: 2017/02/22 02:35:59 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static void			ft_place10(unsigned char *u, size_t n)
{
	size_t			ll;

	ll = 0;
	while (ll < n)
	{
		*((wchar_t*)&(u[n])) >>= 2;
		u[n] |= 0x80;
		++ll;
	}
}

void				ft_putwchar_fd(wchar_t cin, int fd)
{
	unsigned char	*u;
	size_t			len;
	wchar_t			c = cin; // on doit faire ca sinon l'ordinateur explose

	u = (unsigned char*)&c;
	len = ft_strlen((char*)u);
	ft_memrev(u, len);
	++len;
	if (len > 1)
		while (((*u >> 7) & 1) != 1 && (c <<= 1)); // decale a gauche
	if (len == 2) // le reste c'est pas sur mais y'a de l'idee
	{
		c >>= 3;
		u[0] |= 0xC0;
		ft_place10(u, 1);
	}
	if (len == 3)
	{
		c >>= 4;
		u[0] |= 0xE0;
		ft_place10(u, 2);
	}
	if (len == 4)
	{
		c >>= 5;
		u[0] |= 0xF0;
		ft_place10(u, 3);
	}
	(void)fd;
	//write(fd, u, len);
	ft_putbin(u, 4, 4); ft_putstr("\n"); // ligne a virer
}
