/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:13 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/23 17:37:10 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Compares byte strings.
**
** Compares byte string 's1' against byte string 's2'. Both strings 
** are assumed to be 'n' bytes long.
**
** @param s1 First memory area to be compared.
** @param s2 Second memory area to be compared.
** @param n Number of bytes to compare.
** @return 0 if the two strings are identical, otherwise the difference 
** between the first two differing bytes (treated as unsigned char).
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = ((unsigned char *)s1) - 1;
	ps2 = ((unsigned char *)s2) - 1;
	while (n--)
		if (*(++ps1) != *(++ps2))
			return (*ps1 - *ps2);
	return (0);
}
