/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:15:00 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:52:11 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Counts the number of elements in a linked list.
**
** Iterates through the entire list starting from the given node and 
** increments a counter for each element encountered until the end 
** of the list is reached.
**
** @param lst The beginning of the list.
** @return The total number of nodes in the list.
*/
int	ft_lstsize(t_list *lst)
{
	int		n_nodes;
	t_list	*move;

	n_nodes = 0;
	move = lst;
	while (move)
		move = (n_nodes++, move->next);
	return (n_nodes);
}
