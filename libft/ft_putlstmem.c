/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstmem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:43:24 by tfontain          #+#    #+#             */
/*   Updated: 2016/11/24 12:05:28 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putlstmem(t_list *lst)
{
	size_t	n;

	while (lst != NULL)
	{
		n = 0;
		while (n < lst->content_size)
		{
			write(1, (lst->content + n), 1);
			++n;
		}
		lst = lst->next;
	}
}
