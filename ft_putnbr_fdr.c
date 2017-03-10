/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fdr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 22:39:40 by tfontain          #+#    #+#             */
/*   Updated: 2017/03/10 13:37:20 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

ssize_t			ft_putnbr_fdr(int nb, int fd)
{
	ssize_t		r;

	r = 0;
	if (nb < 0)
	{
		r += ft_putchar_fdr('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		r += ft_putnbr_fdr(nb / 10, fd) + ft_putnbr_fdr(nb % 10, fd);
	else
		r += ft_putchar_fdr(nb + '0', fd);
	return (r);
}

/*ssize_t		ft_putnbr_fdr(int n, int fd)
{
	char	array[11];
	int		k;
	ssize_t	r;

	r = 0;
	if (n == -2147483648)
		r += ft_putstr_fdr("-2147483648", fd);
	else if (n == 0)
		r += ft_putchar_fdr('0', fd);
	else
	{
		if (n < 0)
		{
			n = -n;
			r += ft_putchar_fdr('-', fd);
		}
		k = -1;
		while (n)
		{
			array[++k] = n % 10 + '0';
			n = n / 10;
		}
		while (k >= 0)
			r += ft_putchar_fdr(array[k--], fd);
	}
	return (r);
}*/
