/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bytobi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 16:12:53 by tfontain          #+#    #+#             */
/*   Updated: 2017/02/21 16:59:53 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static char			ft_hex_digit(unsigned n)
{
	if (n < 10)
		return (n + '0');
	else
		return ((n - 10) + 'A');
}

const char			*ft_bytohex(unsigned char c)
{
	static char		hex[3];

	hex[0] = ft_hex_digit(c / 0x10);
	hex[1] = ft_hex_digit(c % 0x10);
	hex[2] = 0;
	return (hex);
}
