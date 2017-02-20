/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 20:15:38 by tfontain          #+#    #+#             */
/*   Updated: 2017/02/20 21:17:04 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void		ft_putwchar_fd(wchar_t c, int fd)
{
	unsigned char *s = (unsigned char*)&c;

	while (*s != 0)
	{
		write(fd, s, 1);
		++s;
		if (!(((*s >> 7) & 1) == 1 && ((*s >> 6) & 1) == 0))
			break ;
	}
}
