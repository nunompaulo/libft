/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:22:35 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/22 10:06:12 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Compares two strings up to a specified number of characters.
**
** Lexicographically compares the NUL-terminated strings 's1' and 's2'.
** It compares at most 'n' characters. The comparison is done using 
** unsigned characters so that `\200` is greater than `\0`.
**
** @param s1 The first string to be compared.
** @param s2 The second string to be compared.
** @param n The maximum number of characters to compare.
** @return An integer less than, equal to, or greater than zero if 's1' is 
** found to be less than, equal to, or greater than 's2'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && (s1[i] == s2[i]) && (i < (n -1)))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
