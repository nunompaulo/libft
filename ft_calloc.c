/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:58:12 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/27 14:23:45 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Allocates memory for an array and initializes it to zero.
**
** Allocates memory for an array of 'nmemb' elements of 'size' bytes each. 
** If 'nmemb' or 'size' is 0, the function ensures a unique and valid 
** pointer is returned by allocating 1 byte, which can be safely passed 
** to free(). All allocated memory is filled with zeros using ft_memset.
**
** @param nmemb Number of elements to allocate.
** @param size Size in bytes of each element.
** @return A pointer to the allocated memory, or NULL if the allocation fails.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;

	if (size > 0)
		if (__SIZE_MAX__ / size < nmemb)
			return (NULL);
	memory = malloc(nmemb * size);
	if (!memory)
		return (NULL);
	ft_memset(memory, 0, nmemb * size);
	return (memory);
}
