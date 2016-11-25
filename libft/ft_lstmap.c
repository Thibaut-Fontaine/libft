/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 16:13:07 by tfontain          #+#    #+#             */
/*   Updated: 2016/11/24 12:05:26 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;

	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		ret = malloc(sizeof(t_list));
		ft_memcpy(ret->content, f(lst)->content, f(lst)->content_size);
		ret = ret->next;
		lst = lst->next;
	}
	return (ret);
}
