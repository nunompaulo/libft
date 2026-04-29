/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:33:46 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/23 12:37:21 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Scans memory for a character.
**
** Scans the first 'n' bytes of the memory area pointed to by 's' 
** for the first instance of 'c'. Both 's' and 'c' are interpreted 
** as unsigned char.
**
** @param s Pointer to the block of memory to be searched.
** @param c The character to be located (passed as an int).
** @param n The number of bytes to be analyzed.
** @return A pointer to the matching byte, or NULL if the 
** character does not occur in the given memory area.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
		if (ptr[i++] == (unsigned char)c)
			return (&ptr[i - 1]);
	return (NULL);
}
