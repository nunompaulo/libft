/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:29:01 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 14:19:30 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Converts the initial portion of a string to an integer.
**
** The function skips all white-space characters at the beginning 
** of the string, then takes an optional plus or minus sign. 
** Finally, it converts the sequence of decimal digits into an integer.
**
** @param nptr The string to be converted.
** @return The converted integer value.
*/
int	ft_atoi(const char *nptr)
{
	char	*str;
	long	nbr;
	int		signal;
	int		i;

	i = 0;
	nbr = 0;
	signal = 1;
	str = (char *)nptr;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			signal = -signal;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + (str[i++] - '0');
	return ((int)(nbr * signal));
}
