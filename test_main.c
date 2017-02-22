/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 19:26:11 by tfontain          #+#    #+#             */
/*   Updated: 2017/02/22 02:28:42 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdio.h>
#include "locale.h"

int			main()
{
	wchar_t	s2[200] = L"ሴ";//ο Δικαιοπολις εν αγρω εστιν正体字 / 正體字";
	char	s[200] = "ሴ";

	setlocale(LC_ALL, "");
	printf("%S\n", (wchar_t*)s);
	/*ft_putwstr_fd(s, 1);*/

	ft_putstr("sortie : \n");
	ft_putbin((unsigned char*)s, 2 * 4, 4);
	ft_putstr("\n");
	ft_puthex((unsigned char*)s, 2 * 4, 4);
	ft_putstr("\n");

	//
	//

	ft_putstr("->"); printf("%S\n", (wchar_t*)s2);
	ft_putstr("->"); ft_putwchar_fd(s2[0], 1); ft_putstr("\n");
	//ft_memrev((unsigned char*)&(s2[0]), ft_strlen((char*)&(s2[0])));
	//while (((*(unsigned char*)&(s2[0]) >> 7) & 1) != 1 && (s2[0] <<= 1));
	ft_putstr("entree : \n");
	ft_putbin((unsigned char*)s2, 2 * 4, 4);
	ft_putstr("\n");
	ft_puthex((unsigned char*)s2, 2 * 4, 4);
	ft_putstr("\n");
	return (0);
}
