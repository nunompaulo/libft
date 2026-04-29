/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:55:02 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/22 13:39:43 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Copies memory area, handling overlaps.
**
** The function copies 'n' bytes from memory area 'src' to memory area 
** 'dest'. The memory areas may overlap: the copy is always done in 
** a non-destructive manner by choosing the direction of copying.
**
** @param dest Pointer to the destination array.
** @param src Pointer to the source of data to be copied.
** @param n Number of bytes to copy.
** @return A pointer to the destination 'dest'.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (!dest && !src)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	if (ptr_dest < ptr_src)
		while (n--)
			*(ptr_dest++) = *(ptr_src++);
	else if (ptr_dest > ptr_src)
		while (n--)
			ptr_dest[n] = ptr_src[n];
	return (dest);
}
