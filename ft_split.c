/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:40:41 by rohidalg          #+#    #+#             */
/*   Updated: 2023/09/28 15:03:06 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	if (!s || !c)
		return (0);
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char *) * size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	while (size--)
		str[size] = '\0';
	return (str);
}

static void	ft_free(char **strmem, int x)
{
	while (x)
	{
		x--;
		free(strmem[x]);
	}
	free(strmem);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**words;
	unsigned int	word_start;
	unsigned int	word_len;

	words = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!s || !words)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		word_start = i;
		while (s[i] && s[i] != c)
			i++;
		word_len = i - word_start;
		words[j] = ft_strnew(word_len);
		if (!words[j])
		{
			ft_free(words, j);
			return (0);
		}
		ft_strlcpy(words[j], &s[word_start], word_len + 1);
		j++;
	}
	words[j] = 0;
	return (words);
}
