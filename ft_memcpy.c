/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:03:10 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/23 16:06:17 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Copies memory area.
**
** The function copies 'n' bytes from memory area 'src' to memory area 
** 'dest'. The memory areas must not overlap. Use ft_memmove if the 
** memory areas do overlap.
**
** @param dest Pointer to the destination array.
** @param src Pointer to the source of data to be copied.
** @param n Number of bytes to copy.
** @return A pointer to the destination 'dest'.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (!dest && !src)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	while (n--)
		*(ptr_dest++) = *(ptr_src++);
	return (dest);
}
