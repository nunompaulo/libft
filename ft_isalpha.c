/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:32:49 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/21 18:54:14 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Checks for an alphabetic character.
** The function evaluates whether the provided value corresponds to an 
** alphabetic letter (uppercase 'A'-'Z' or lowercase 'a'-'z').
**
** @param c The character to be checked (represented as an int).
** @return Returns 1 if 'c' is alphabetic letter, or 0 otherwise.
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
