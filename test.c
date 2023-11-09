/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:02:49 by rohidalg          #+#    #+#             */
/*   Updated: 2023/09/22 21:37:02 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>

int	main(void)
{
	/*char	a[] = "contratame";
	char	b[] = "movistar";
	char	c[] = "contratame";
	char	d[] = "movistar";
	char	e = 'o';
	char	f[] = "hala";
	char	g[] = "hola";

	printf("ft_isalnum vale %i\n", ft_isalnum('0'));
	printf("isalnum vale %i\n", isalnum('0'));
	printf("ft_isalpha vale %i\n", ft_isalpha('a'));
	printf("isalpha vale %i\n", isalpha('a'));
	printf("ft_isascii vale %i\n", ft_isascii('b'));
	printf("isascii vale %i\n", isascii('b'));
	printf("ft_isdigit vale %i\n", ft_isdigit('3'));
	printf("isdigit vale %i\n", isdigit('3'));
	printf("ft_isprint vale %i\n", ft_isprint('c'));
	printf("isprint vale %i\n", isprint('c'));
	printf("\n");
	printf("ft_strlen vale %d\n", ft_strlen("holiwi"));
	printf("\n");
	printf("ft_bzero vale %s\n", ft_bzero);
	printf("bzero vale %c\n", ft_bzero);
	printf("\n");
	printf("ft_memset vale %s\n", ft_memset);
	printf("ft_memcpy vale %s\n", ft_memcpy);
	printf("ft_memmove vale %s\n", ft_memmove);
	printf("ft_strlcat = %zu\n", ft_strlcat(a, b, 6));
	printf("strlcat = %zu\n", strlcat(c, d, 11));
	printf("ft_strchr vale %s\n", ft_strchr(a, e));
	printf("ft_strchr vale %s\n", ft_strchr(a, e));
	printf("ft_strncmp vale %d\n", ft_strncmp(f, g, 3));
	printf("strncmp vale %d\n", strncmp(f, g, 3));
	*/
printf("/*---------------------------FT_ATOI---------------------------*/\n");
	printf("ft_atoi = %i\n", ft_atoi("12"));
	printf("atoi = %i\n", atoi("12"));

printf("/*---------------------------FT_SPLIT---------------------------*/\n");
	char split[] = "hello!";
	char **words = ft_split("hello!", ' ');
	int	i = 0;

	while(words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}

/*printf("/---------------------------FT_BZERO---------------------------/\n");
	//printf("ft_bzero = %s\n", ft_bzero("holaa", 5));
	printf("bzero = %s\n", bzero("holaa", 5));*/

printf("/*---------------------------FT_STRLCAT---------------------------*/\n");
	char strlcat_d[] = "hola";
	char strlcat_s[] = "caracola";

	printf("ft_strlcat vale %zu\n", ft_strlcat(strlcat_d, strlcat_s, 20));


// printf("/*---------------------------FT_CALLOC---------------------------*/\n");
// 	char n_calloc = 5;
// 	char s_calloc = sizeof(int);
// 	int *calloc = (int *)ft_calloc(n_calloc, s_calloc);

// 	printf("ft_calloc vale %zu\n", calloc);


printf("/*---------------------------FT_ITOA---------------------------*/\n");
	int n_itoa = -123;
	char *itoa = ft_itoa(n_itoa);
	printf("ft_itoa vale %s\n", itoa);


printf("/*---------------------------FT_MEMCPY---------------------------*/\n");
	const char *src_memcpy = "holaaaa";
	char dest_memcpy[8];
	ft_memcpy(dest_memcpy, src_memcpy, 3);
	printf("ft_memcpy vale %s\n", dest_memcpy);
	printf("memcpy vale %s\n", memcpy(dest_memcpy, src_memcpy, 3));


printf("/*---------------------------FT_MEMMOVE---------------------------*/\n");
	const char *src_memmove = "adiosss";
	char dst_memmove [8];
	ft_memmove(dst_memmove, src_memmove, 3);
	printf("ft_memmove vale %s\n", dst_memmove);
	printf("memmove vale %s\n", memmove(dst_memmove, src_memmove, 3));

}