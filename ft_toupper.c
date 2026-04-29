/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:41:20 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/24 10:00:34 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Converts a character to uppercase.
**
** If the character passed is a lowercase letter ('a'-'z'), the 
** function returns its uppercase equivalent. Otherwise, it 
** returns the character unchanged.
**
** @param c The character to convert (passed as an int).
** @return The uppercase equivalent if 'c' was lowercase, otherwise 'c'.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
