/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:41:20 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/24 10:00:48 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Converts a character to lowercase.
**
** If the character passed is an uppercase letter ('A'-'Z'), the 
** function returns its lowercase equivalent. Otherwise, it 
** returns the character unchanged.
**
** @param c The character to convert (passed as an int).
** @return The lowercase equivalent if 'c' was uppercase, otherwise 'c'.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
