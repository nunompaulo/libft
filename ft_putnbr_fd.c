/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 19:00:41 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 13:49:03 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Outputs an integer to the given file descriptor.
**
** Converts the integer 'n' into characters and writes them to 'fd'.
** It handles the sign and utilizes recursion to process each digit. 
** The function uses a long type internally to safely handle INT_MIN.
**
** @param n The integer to be output.
** @param fd The file descriptor on which to write.
** @return None.
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	if (!fd)
		return ;
	nbr = n;
	if (nbr < 0)
		nbr = (ft_putchar_fd('-', fd), -nbr);
	if (nbr > 9)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((nbr % 10) + '0', fd);
}
