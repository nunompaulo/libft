/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:19:19 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:52:52 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Returns the last node of a linked list.
**
** Runs through the list starting from the given node until it 
** reaches the final element (where the 'next' pointer is NULL).
**
** @param lst The beginning of the list.
** @return A pointer to the last node, or NULL if the list is empty.
*/
t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
