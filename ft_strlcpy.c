/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:11:44 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 13:32:27 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Size-bounded string copying.
**
** Copies up to 'size - 1' characters from the NUL-terminated string 'src' 
** to 'dst', NUL-terminating the result as long as 'size' is greater than 0.
**
** @param dst The destination buffer where the content is copied.
** @param src The source string to be copied.
** @param size The full size of the destination buffer.
** @return The total length of the string 'src'.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && (i < size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
