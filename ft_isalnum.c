/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:47:57 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/21 18:52:44 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Checks for an alphanumeric character.
** The function evaluates whether the provided value corresponds to an 
** alphabetic letter (uppercase 'A'-'Z' or lowercase 'a'-'z') or a 
** decimal digit ('0'-'9').
**
** @param c The character to be checked (represented as an int).
** @return Returns 1 if 'c' is alphanumeric, or 0 otherwise.
*/
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
