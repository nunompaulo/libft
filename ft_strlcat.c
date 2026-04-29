/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:54:38 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 12:47:28 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Size-bounded string concatenation.
**
** Appends the NUL-terminated string 'src' to the end of 'dst'. It will 
** append at most 'size - strlen(dst) - 1' bytes, NUL-terminating the result.
**
** @param dst The destination string to be appended to.
** @param src The source string to append.
** @param size The full size of the destination buffer.
** @return The total length of the string it tried to create (initial length 
** of 'dst' plus length of 'src').
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	while (src[i] && (i < (size - dlen - 1)))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (slen + dlen);
}
