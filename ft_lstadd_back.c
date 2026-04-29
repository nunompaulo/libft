/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:20:34 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:53:41 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Adds a new element at the end of a linked list.
**
** Checks if the new element is valid and, if the list is empty, sets it as 
** the first node. If the list already contains elements, it locates the 
** current last node using ft_lstlast and updates its 'next' pointer to 
** link the new element to the end of the sequence.
**
** @param lst A pointer to the pointer of the first node in the list.
** @param new A pointer to the new node to be added to the list.
** @return None (void).
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}
