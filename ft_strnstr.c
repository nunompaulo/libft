/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:25:53 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 14:09:06 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Locates a substring in a string, with a length limit.
**
** Searches for the first occurrence of the NUL-terminated string 'little'
** in the string 'big', where not more than 'len' characters are searched.
** Characters after a '\0' are not searched.
**
** @param big The main string to be searched (the haystack).
** @param little The substring to find (the needle).
** @param len The maximum number of characters to search within 'big'.
** @return A pointer to the first character of the first occurrence found,
** NULL if not found, or 'big' if 'little' is empty.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = -1;
	while (big[++i] && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j]) && big[i + j] && (i + j < len))
		{
			if (little[++j] == '\0')
				return ((char *)&big[i]);
		}
	}
	return (NULL);
}
