/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:47:22 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 09:01:26 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Outputs a character to the given file descriptor.
**
** Writes a character 'c' in the specified file descriptor 'fd'. 
** This is a utility function that wraps the standard write system call 
** to handle single character output.
**
** @param c The character to be output.
** @param fd The file descriptor on which to write.
** @return None.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}
