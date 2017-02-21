/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 20:15:38 by tfontain          #+#    #+#             */
/*   Updated: 2017/02/21 16:06:32 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void				ft_putwchar_fd(wchar_t c, int fd)
{
	unsigned char	*s;

	s = (unsigned char*)&c;
	write(fd, s, 1);
	/*while ((((*s >> 7) & 1) == 1 && ((*s >> 6) & 1) == 0))
	{
		write(fd, s, 1);
		++s;
	}*/
}
