/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:18:02 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 09:22:26 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Applies a function to each character of a string to create a new one.
**
** Iterates through the string 's' and applies the function 'f' to each 
** character, passing its index and the character itself. The results 
** are stored in a new string allocated with malloc(3).
**
** @param s The string to be iterated over.
** @param f The function to be applied to each character.
** @return A pointer to the new string, or NULL if allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = -1;
	len = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
