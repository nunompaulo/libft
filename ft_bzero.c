/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:41:27 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/22 10:28:11 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Erases the data in the n bytes of the memory starting at s.
**
** Writes zeroes (bytes containing '\0') to the memory area pointed to 
** by 's'. It is essentially a wrapper for ft_memset.
**
** @param s Pointer to the block of memory to be zeroed.
** @param n The number of bytes to be set to zero.
** @return None.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (n > i)
		str[i++] = '\0';
}
