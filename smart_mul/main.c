/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 05:18:55 by tfontain          #+#    #+#             */
/*   Updated: 2016/11/19 07:38:48 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LEN 617
#define MAX 3000
#define REAL_LEN 5

static	void	init_alea(char *n1, char *n2)
{
	int		k;

	srand(time(NULL));
	k = 0;
	while (k != LEN)
	{
		n1[k] = rand() % 10;
		n2[k] = rand() % 10;
		++k;
	}
}

/*	les nombres sont a l'envers dans les tableaux */
// l'algo est faux : il faut faire CHAQUE case de n1 * TOUTES les cases de n2
// pour toutes les cases de n1
static	char	*multiplier(char *n1, char *n2)
{
	char		*result;
	int			k;
	int			tmp;

	if ((result = malloc(MAX)) == NULL)
		return (NULL);
	bzero(result, MAX);
	k = 0;
	while (k < LEN)
	{
		tmp = n1[k] * n2[k];
		result[k] = tmp % 10 + result[k];
		if (tmp >= 10)
			result[k + 1] = tmp / 10;
		++k;
	}
	return (result);
}

static	void	init_that(char *n1, char *n2)
{
	memcpy(n1, "4896", REAL_LEN);
	memcpy(n2, "3145", REAL_LEN);
}

static	void	get_down(char *str, size_t size)
{
	while (size)
	{
		str[size] = str[size] - '0';
		--size;
	}
}

char			*strrev(char *str)
{
	char *p1, *p2;

	if (! str || ! *str)
		return str;
	for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
	{
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return str;
}

static	void	get_up(char *str, size_t size)
{
	while (size)
	{
		str[size] = str[size] + '0';
		--size;
	}
}

int		main() // main de test
{
	char	n1[LEN];
	char	n2[LEN];
	char	*result;

	init_that(n1, n2); // on initialise n1 et n2
	strrev(n1); // on reverse puisque multiplier lit dans le sens inverse
	strrev(n2);
	get_down(n1, 4); // on met '0' -> 0 et '9' -> 9
	get_down(n2, 4);
	result = multiplier(n1, n2); // multiplier
	get_up(result, 10); // 0 -> '0' et 9 -> '9'
	strrev(result);
	printf("%s\n", result);
	return (0);
}


/*int			main ()
{
	char	n1[LEN];
	char	n2[LEN];
	char	*result;

	//init_alea(n1, n2);
	init_that(n1, n2);
	get_down(n1, REAL_LEN - 1);
	get_down(n2, REAL_LEN - 1);
	result = multiplier(n1, n2);
	get_up(n1, REAL_LEN - 1);
	get_up(n2, REAL_LEN - 1);
	n1[REAL_LEN] = '\0';
	n2[REAL_LEN] = '\0';
	printf("%s\n", result);
	return (0);
}*/
