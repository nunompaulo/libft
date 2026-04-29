/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:55:51 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 13:40:57 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Duplicates a string by allocating memory.
**
** Allocates sufficient memory for a copy of the string 's', performs 
** the copy, and returns a pointer to it. The memory is allocated 
** using ft_calloc, ensuring the new string is properly null-terminated.
**
** @param s The string to be duplicated.
** @return A pointer to the duplicated string, or NULL if allocation fails.
*/
char	*ft_strdup(const char *s)
{
	int		i;
	char	*new_str;
	size_t	slen;

	i = -1;
	slen = ft_strlen(s);
	new_str = ft_calloc(slen + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[++i])
		new_str[i] = (char)s[i];
	return (new_str);
}
