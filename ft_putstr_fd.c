/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:53:07 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 09:04:50 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Outputs a string to the given file descriptor.
**
** Writes the string 's' and writes each character to the specified file
** descriptor 'fd'. It does not append a newline character at the end.
** To append a newline, use the function ft_putendl_fd.
**
** @param s The string to be output.
** @param fd The file descriptor on which to write.
** @return None.
*/
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s || !fd)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], sizeof(char));
}
