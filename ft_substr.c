/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:01:16 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:19:17 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Allocates and returns a substring from a string.
**
** Creates a new string starting from the index 'start' with a maximum 
** size of 'len'. The function handles cases where the start index is 
** beyond the string length or where the requested length exceeds the 
** remaining characters, ensuring only valid memory is allocated.
**
** @param s The string from which to create the substring.
** @param start The start index of the substring in the string 's'.
** @param len The maximum length of the substring.
** @return A pointer to the substring, or NULL if memory allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	slen;
	size_t	mtoalloc;

	slen = ft_strlen(s);
	mtoalloc = len;
	if (start >= slen)
		mtoalloc = 0;
	else if (slen - start < len)
		mtoalloc = slen - start;
	new_str = ft_calloc(mtoalloc + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (mtoalloc-- > 0)
		new_str[mtoalloc] = s[start + mtoalloc];
	return (new_str);
}
