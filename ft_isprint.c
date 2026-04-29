/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:52:51 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/21 18:56:55 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Checks for any printable character.
**
** The function determines if the given character is a printable 
** character, including space. It validates if the value falls 
** within the ASCII range of 32 (space) to 126 (tilde '~').
**
** @param c The character to be checked (represented as an int).
** @return Returns 1 if 'c' is printable, or 0 otherwise.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
