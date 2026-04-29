/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:37:23 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 09:18:08 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Applies a function to each character of a string.
**
** Iterates through the string 's' and applies the function 'f' to each 
** character, passing its index as the first argument and its address 
** as the second. This allows for in-place modification of the string.
**
** @param s The string to be iterated over.
** @param f A pointer to the function to be applied to each character.
** @return None.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
