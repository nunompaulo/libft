/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 08:55:04 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/21 18:57:44 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Checks whether c is a 7-bit unsigned char value.
**
** The function checks if the character fits into the standard ASCII 
** character set. This includes all characters from 0 to 127 
** inclusive, covering control characters, letters, digits, and symbols.
**
** @param c The character to be checked (represented as an int).
** @return Returns 1 if 'c' is within the ASCII range, or 0 otherwise.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
