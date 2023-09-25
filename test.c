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
	char	a[] = "contratame";
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
	// printf("ft_bzero vale %s\n", ft_bzero);
	// printf("bzero vale %c\n", ft_bzero);
	printf("\n");
	// printf("ft_memset vale %s\n", ft_memset);
	// printf("ft_memcpy vale %s\n", ft_memcpy);
	// printf("ft_memmove vale %s\n", ft_memmove);
	printf("ft_strlcat = %zu\n", ft_strlcat(a, b, 6));
	printf("strlcat = %zu\n", strlcat(c, d, 11));
	printf("ft_strchr vale %s\n", ft_strchr(a, e));
	printf("ft_strchr vale %s\n", ft_strchr(a, e));
	printf("ft_strncmp vale %d\n", ft_strncmp(f, g, 3));
	printf("strncmp vale %d\n", strncmp(f, g, 3));

}
