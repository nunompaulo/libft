/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:58:24 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 09:02:24 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Outputs a string to a file descriptor, followed by a newline.
**
** Writes the string 's' to the specified file descriptor 'fd', and then
** appends a newline character ('\n'). It iterates through the string 
** character by character until the null-terminator is reached.
**
** @param s The string to be output.
** @param fd The file descriptor on which to write.
** @return None.
*/
void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], sizeof(char));
	write(fd, "\n", sizeof(char));
}
