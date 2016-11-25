/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 21:03:40 by tfontain          #+#    #+#             */
/*   Updated: 2016/11/24 21:19:24 by tfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

/*#include <stdio.h> // ft_memset
#define TAILLE 5
int		main(void)
{
	char	str[1000] = "00000000000000000000000000000000000000000000000000";

	ft_memset(str, '$', TAILLE);
	str[TAILLE] = '\0';
	printf("%s", str);
	return (0);
}*/

/*
#include <stdio.h> // ft_bzero
int		main()
{
	char	str[50];

	ft_bzero(str, 4);
	printf("%s", str);
	return (0);
}*/

/*
#include <stdio.h>
int		main()
{
	char *src = "thanks to @apellicc for this test !\r\n";
	char dst1[0xF0];
	int size = strlen(src);
	char *r1 = __builtin___memmove_chk (dst1, src, size, __builtin_object_size (dst1, 0));
	char *r2 = ft_memmove(dst1, src, size);
	printf("r1 = %p r2 = %p\n", r1, r2);
	r1 = __builtin___memmove_chk ("", "" - 1, 0, __builtin_object_size ("", 0));
	r2 = ft_memmove("", "" - 1, 0);
	printf("r1 = %p r2 = %p\n", r1, r2);
	return (0);
}
*/


/*#include <stdio.h> // ft_memcpy || ft_memccpy
int		main()
{
	char	src[] = "test basic !";
	char	buff1[] = "the cake is a lie !\0i'gheargeav\r\n";
	char	buff2[] = "the cake is a lie !\0i'gheargeav\r\n";
	
	memccpy(buff1, src, ' ', strlen(src));
	ft_memccpy(buff2, src, ' ', strlen(src));
	printf("%d\n%s\n%s\n", memcmp(buff1, buff2, strlen(buff2)), buff1, buff2);
	return(0);
}*/

/*#include <stdio.h> // memchr
int main ()
{
	const char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	const char ch = 'R';
	char *ret;

	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}*/

/*
#include <stdio.h> // memcmp
int			main ()
{
	char	str1[15];
	char	str2[15];
	int		ret1;
	int		ret2;

	memcpy(str1, "abcde", 6);
	memcpy(str2, "abcdeblabla", 8);
	ret1 = memcmp(str1, str2, 5);
	ret2 = ft_memcmp(str1, str2, 5);
	printf("__memcmp_ : %d\nft_memcmp : %d\n1 si memcmp == ft_memcmp 0 sinon. -> %d\n", ret1, ret2, (ret1 == ret2));
	if (ret2 > 0)
		printf("str2 is less than str1");
	else if (ret2 < 0)
		printf("str1 is less than str2");
	else
		printf("str1 is equal to str2");
	return(0);
}*/

/*
#include <stdio.h> //test memcmp  BIS
int				main()
{
	uint8_t		*s1 = (uint8_t*)"\xff\xaa\xde\x12";
	uint8_t		*s2 = (uint8_t*)"\xff\xaa\xde\x12TOAST";
	size_t		size = 4;
	printf("1 si memcmp == ft_memcmp 0 sinon. -> %d\n"
			, (memcmp(s1, s2, size) == ft_memcmp(s1, s2, size)));
	return (0);
}
*/

/*#include <stdio.h> // strncpy && strcpy
#include <string.h>
int		main()
{
	char src[40];
	char dest[100];
	
	memset(dest, '\0', sizeof(dest));
	ft_strcpy(src, "erg SALUT LI COUPAIN1545  gerg ");
	//ft_strcpy(dest, src);
	ft_strncpy(dest, src, 50);
	printf("string copiee : %s\n", dest);
	return(0);
}*/

/*#include <stdio.h>
int			main()
{
	char	*src = "";
	char	dst1[30];
	char	dst2[30];
	size_t max = 29;

	__builtin___memset_chk (dst1, 'B', sizeof(dst1), __builtin_object_size (dst1, 0));
	__builtin___memset_chk (dst2, 'B', sizeof(dst2), __builtin_object_size (dst2, 0));
	__builtin___strncpy_chk (dst1, src, max, __builtin_object_size (dst1, 2 > 1 ? 1 : 0));
	ft_strncpy(dst2, src, max);
	printf("memcmp ret -> %d\n__strncpy_ ret -> %s\nft_strncmp ret -> %s\n", memcmp(dst1, dst2, 29), dst1, dst2);
	return (0);
}*/

/*#include <stdio.h> //strncat && strcat && strlcat
#include <string.h>

int			main ()
{
	char	src[50], dest[50];

	strcpy(src, "123456789 SRC___");
	strcpy(dest, "TEST123BLABLA DEST___");
	size_t	len_test = ft_strlen(dest) + ft_strlen(src);
	//ft_strncat(dest, src, 40);
	//ft_strcat(dest, src);
	printf("%lu\n%lu\n"
			, ft_strlcat(dest, src, 40)
			, len_test);
	printf("string concatenee: |%s|", dest);
	return(0);
}*/

/*#include <stdio.h>   //another strlcat test
int				main()
{
	char		*str = "blablablablablablab123456789\0lablablablabla\r\n";
	char		buff1[0xF00] = "there is no stars in the sky";
	char		buff2[0xF00] = "there is no stars in the sky";
	size_t		max = strlen("blablablablablablab\0lablablablabla\r\n") + strlen("there is no stars in the sky");
	size_t		ret1;
	size_t		ret2;

	//__builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
	ret1 = strlcat(buff1, str, max);
	ret2 = ft_strlcat(buff2, str, max);
	printf("__strlcat_ -> %s\nft_strlcat -> %s\nret __strlcat_ -> %lu\nret ft_strlcat -> %lu\n", buff1, buff2, ret1, ret2);
	return (0);
}*/

/*
#include <stdio.h> //strrchr && strchr
int main ()
{
	const char str[] = "voici la striiiiiing ! toast ! :)";
	const char ch = '!';
	char *ret;
	//ret = ft_strchr(str, ch);
	ret = ft_strrchr(str, ch);
	printf("separateur : |%c| str :  |%s|\n", ch, ret);
	return(0);
}*/

/*#include <stdio.h> // strcmp && strncmp

int		main ()
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "toas");
	strcpy(str2, "");
	//ret = ft_strncmp(str2, str1, 4);
	printf("ft_strcmp -> %d$\n__strcmp_ -> %d$\n", ft_strcmp(str2, str1),
			ret = strcmp(str2, str1));
	if (ret < 0)
		printf("str1 < str2");
	else if (ret > 0)
		printf("str1 > str2");
	else
		printf("str1 == str2");
	return(0);
}*/

/*#include <stdio.h> //  strstr  

int			main()
{
	char	*s2 = "FF";
	char	*s1 = "see F your F return FF now FF";
	char	*i1 = strstr(s1, s2);
	char	*i2 = ft_strstr(s1, s2);

	printf("%s\n%s\n", i1, i2);
	return (0);
}*/

/*#include <stdio.h> // strlen && strncmp && strcmp && strstr && strnstr
#include <string.h>


int main()
{
	const char haystack[30] = "ToastTestTataTotoTest123";
	const char needle[10] = "TestTa";
	char *ret;

	//ret = ft_strstr(haystack, needle);
	ret = ft_strnstr(haystack, needle, 5);
	printf("little : %s\nft_strlen=%lu\nstrlen=%lu\nft_strncmp=%d\nstrncmp=%d",
			ret, ft_strlen(haystack), strlen(haystack),
			ft_strncmp(haystack, needle, 5), strncmp(haystack, needle, 5));
	return (0);
}*/

/*#include <stdio.h>

int			main()
{
	char	big[50];
	char	little[20];
	int		n;

	n = 5;
	strcpy(big, "cra co  cou  cr");
	strcpy(little, "co");
	printf("ft_strnstr ->%s\n__ strnstr ->%s\n"
			, ft_strnstr(big, little, n), strnstr(big, little, n));
	printf("_ft_strstr ->%s\n___ strstr ->%s\n"
			, ft_strstr(big, little), strstr(big, little));
	return (0);
}*/

/*
//  TEST SUR INTEGER
#include <stdio.h>
//         +2147483647
//         -2147483648
int		main()
{
	int		n;

	n = -2147483648;
	--n;
	printf("%d\n", n);
	n = 2147483647;
	++n;
	printf("%d\n", n);
	return (0);
}*/

/*#include <stdio.h>

int main()       // atoi
{
	const char	nptr[] = "			 -21#include <stdio.h>

int		main()
{
	printf("count word : %lu\n", ft_count_words("***premiermot****2emot***test****4emot****5thword*******", '*'));
	printf("next char : %lu\n", ft_nextchar("12345678*ABCDEF", '*'));
	r47483647 balgef";

	printf("__ atoi ->%d\nft_atoi ->%d\n", atoi(nptr), ft_atoi(nptr));
	return (0);
}*/

/*#include <stdio.h>
#include <ctype.h>
int			main()
{
	int		k;

	k = -50;
	while (k <= 300)
	{
		printf("%d   ||   %d\n", ft_isascii(k), isascii(k));
		k = k + 4;
	}
	return (0);
}*/

/*#include <stdio.h>   // toupper && tolower
#include <ctype.h>

int			main()
{
	int		c;

	c = 50;
	while (++c <= 100)
		printf("%c  |  %c\n", ft_toupper(c), toupper(c));
	return (0);
}*/

/*int			main()
{
	ft_putchar('c');
	ft_putstr("\nsalut !\n");
	ft_putnbr(-2147483648);
	ft_putchar_fd('\n', 2);
	ft_putchar_fd('w', 2);
	ft_putstr_fd("\ntest 222 test 333\n", 2);
	ft_putnbr_fd(158, 2);
	return (0);
}*/

/*#include <stdio.h>
int			main()
{
	printf("%s\n", ft_itoa(-21473648));
	return (0);
}*/

/*#include <stdio.h> //  strtrim

int			main()
{
	char	*s1 = "    \t \n  Hello \t  Please\n Trim me !  \t \n";

	printf("%s\n%s\n", s1, ft_strtrim(s1));
	return (0);
}*/

#include <stdio.h>

int			main()
{
	int		k;
	char	**ret;

	ret = ft_strsplit(" premiermot  deuxiememot   coucou    test      ", ' ');
	k = 0;
	while (k < 4)
	{
		printf("===>> %s$              --    %llu\n", *(k + ret), ((unsigned long long int)(k + ret)) % 10000);
	++k;
	}
		return (0);
}













