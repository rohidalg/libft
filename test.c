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


printf("/*---------------------------FT_MEMSET---------------------------*/\n");
	char s_memset[] = "holaaaaaaaa";
	int c_memset = 'k';
	char *r_memset = ft_memset(s_memset, c_memset, 5);
	printf("ft_memset vale =%s\n", r_memset);
	printf("memset vale =%s\n", memset(s_memset, c_memset, 5));


printf("/*---------------------------FT_STRTRIM---------------------------*/\n");
	char const s1_strtrim[] = "           hola caracola";
	char const set_strtrim = ' ';
	char *r_strtrim = ft_strtrim(s1_strtrim, &set_strtrim);
	printf("ft_strtrim vale =%s\n", r_strtrim);
	


printf("/*---------------------------FT_STRNCMP---------------------------*/\n");
	char str1_strncmp[] = "hola Rodrigo";
	char str2_strncmp[] = "hola rodrigo";
	int r_strncmp = ft_strncmp(str1_strncmp, str2_strncmp, 15);
	printf("ft_strncmp vale =%i\n", r_strncmp);


printf("/*---------------------------FT_SUBSTR---------------------------*/\n");
	char s_substr[] = "hoy hace un dia esplendido";
	int start_substr = 4;
	char *r_substr = ft_substr(s_substr, start_substr, 27);
	printf("ft_substr vale =%s\n", r_substr);


printf("/*---------------------------FT_LSTADD_BACK---------------------------*/\n");
	t_list *lst = 0;
	t_list *n1 = ft_lstnew("nodo1");
	t_list *n2 = ft_lstnew("nodo2");
	t_list *n3 = ft_lstnew("nodo3");

	ft_lstadd_back(&lst, n1);
	ft_lstadd_back(&lst, n2);
	ft_lstadd_back(&lst, n3);

	printf("contenido de la lista:\n");

	t_list *current = lst;
	while(current != 0)
	{
		printf("%s\n", (char *)current -> content);
		current = current -> next;
	}


printf("/*---------------------------FT_STRNSTR---------------------------*/\n");
	char big_strnstr[] = "buenos dias rodrigo";
	char little_strnstr[] = "rodrigo";
	char *r_strnstr = ft_strnstr(big_strnstr, little_strnstr, 20);
	printf("ft_strnstr vale =%s\n", r_strnstr);
}