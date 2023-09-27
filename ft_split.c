/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:40:41 by rohidalg          #+#    #+#             */
/*   Updated: 2023/09/27 20:08:56 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_countwords(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	if (!s || !c)
		return (0);
	count = 1;
	while (s[i])
	{
		if (s[i] = c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count);

}

char *ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(char*) * size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	while(size--)
		str[size] = '\0';
	return (str);
}

char **ft_split(char const *s, char c)
{
	unsigned int i;
	unsigned int j;
	char **words;

	words = (char**)mallloc(sizeof(char*) * (ft_countwords(s, c) + 1));
	if (!s || !words)
		return (0);
	while (*s != '\0')
	{
		i = 0;
		while(s[i] ! = c && s[i] != '\0')
			i++;
		if (i > 0)
		{
			words[j++] = ft_strncpy(ft_strnew(i), s, i);
			s = &s[i];
		}
		else 
			s++;
	}
	words[j] = 0;
	return (words);
}
