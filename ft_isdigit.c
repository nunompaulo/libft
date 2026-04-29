/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:46:30 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/21 18:55:38 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** @brief Checks for an decimal digit character.
** The function evaluates whether the provided value corresponds to 
** a decimal digit ('0'-'9').
**
** @param c The character to be checked (represented as an int).
** @return Returns 1 if 'c' is decimal digit, or 0 otherwise.
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
