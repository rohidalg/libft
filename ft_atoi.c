/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:10:21 by rohidalg          #+#    #+#             */
/*   Updated: 2023/09/25 13:48:51 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	isneg;
	int	sum;

	i = 0;
	isneg = 1;
	sum = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v'
		|| s[i] == '\r' || s[i] == '\f')
		i++;
	if (s[i] == '-')
		isneg = -isneg;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		sum = sum * 10;
		sum = sum + (s[i] - '0');
		i++;
	}
	return (sum * isneg);
}
