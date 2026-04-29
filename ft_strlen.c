/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:53:54 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/22 10:07:01 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Calculates the length of a string.
**
** The function computes the length of the NUL-terminated string 's' 
** by counting the number of characters that precede the 
** terminating null character ('\0').
**
** @param s The string whose length is to be measured.
** @return The number of characters in the string 's'.
*/
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
