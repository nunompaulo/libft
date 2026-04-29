/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:16:03 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 13:45:41 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Locates the first occurrence of a character in a string.
**
** Searches for the first occurrence of the character 'c' (converted 
** to a char) in the string pointed to by 's'. The terminating null 
** character is considered part of the string.
**
** @param s The string to be searched.
** @param c The character to be located (passed as an int).
** @return A pointer to the located character, or NULL if the 
** character does not appear in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
