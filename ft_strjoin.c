/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:38:30 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 09:11:25 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Concatenates two strings into a new allocated string.
**
** Allocates memory and returns a new string, which is the result of 
** the concatenation of 's1' and 's2'. The new string is properly 
** null-terminated using ft_calloc.
**
** @param s1 The prefix string.
** @param s2 The suffix string.
** @return A pointer to the new string, or NULL if allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	ls1;
	size_t	ls2;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	new_str = ft_calloc(ls1 + ls2 + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcat(new_str, s1, ls1 + ls2 + 1);
	ft_strlcat(new_str, s2, ls1 + ls2 + 1);
	return (new_str);
}
