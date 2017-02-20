/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd_u.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 22:23:44 by tfontain          #+#    #+#             */
/*   Updated: 2017/02/20 17:02:51 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

/*
** this version works for UTF-8
** write size char max (and not size bytes)
*/

void		ft_putnstr_fd_u(char const *s, int fd, size_t size)
{
	size_t	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != 0 && size > 0)
	{
		while (s[i] != 0)
		{
			write(fd, &(s[i]), 1);
			++i;
			if (!(((s[i] >> 7) & 1) == 1 && ((s[i] >> 6) & 1) == 0))
				break ;
		}
		--size;
	}
}
