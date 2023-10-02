/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:55:13 by rohidalg          #+#    #+#             */
/*   Updated: 2023/09/27 20:07:06 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

extern int		ft_isalnum(int c);
extern int		ft_isalpha(int c);
extern int		ft_isascii(int c);
extern int		ft_isdigit(int c);
extern int		ft_isprint(int c);
extern int		ft_strlen(char const *s);
extern void		*ft_memset(void *s, int c, size_t n);
extern void		ft_bzero(void *s, size_t n);
extern void		*ft_memcpy(void *dest, const void *src, size_t len);
extern void		*ft_memmove(void *dst, const void *src, size_t len);
extern size_t	ft_strlcpy(char *dest, const char *src, size_t n);
extern size_t	ft_strlcat(char *dst, const char *src, size_t size);
extern int		ft_toupper(int c);
extern int		ft_tolower(int c);
extern char		*ft_strchr(const char *s, int c);
extern char		*ft_strrchr(const char *s, int c);
extern int		ft_strncmp(const char *str1, const char *str2, size_t num);
extern void		*ft_memchr(const void *str, int c, size_t n);
extern int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
extern char		*ft_strnstr(const char *big, const char *little, size_t len);
extern int		ft_atoi(const char *s);
extern void		*ft_calloc(size_t nitems, size_t size);
extern char		*ft_strdup(const char *s);
extern char		*ft_substr(char const *s, unsigned int start, size_t len);
extern char		*ft_strjoin(char const *s1, char const *s2);
extern char		*ft_strtrim(char const *s1, char const *set);
extern char 	**ft_split(char const *s, char c);
extern char     *ft_itoa(int n);

#endif
