/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:23:04 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/24 19:17:04 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** @brief Fills memory with a constant byte.
**
** The function fills the first 'n' bytes of the memory area pointed 
** to by 's' with the constant byte 'c'.
**
** @param s Pointer to the block of memory to fill.
** @param c The value to be set (passed as an int, converted to unsigned char).
** @param n The number of bytes to be set to the value.
** @return A pointer to the memory area 's'.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (n > i)
		str[i++] = c;
	return (s);
}
