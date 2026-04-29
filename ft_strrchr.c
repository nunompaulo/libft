/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:31:26 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 13:47:48 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Locates the last occurrence of a character in a string.
**
** Searches for the last occurrence of 'c' in the string 's'. The search 
** includes the null terminator. It iterates backwards from the end 
** of the string to the beginning.
**
** @param s The string to be searched.
** @param c The character to be located (passed as an int).
** @return A pointer to the last occurrence of 'c', or NULL if not found.
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (--i > 0)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
