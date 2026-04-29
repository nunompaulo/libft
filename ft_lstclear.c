/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:23:28 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:53:17 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Deletes and frees a list and all its following elements.
**
** Iterates through the list and uses the function 'del' to delete the 
** content of each element, followed by freeing the memory of the node 
** itself. Finally, the pointer to the list is set to NULL to ensure 
** no dangling references remain.
**
** @param lst A pointer to the pointer of the first node in the list.
** @param del The address of the function used to delete the content of 
**            each node.
** @return None (void).
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp_node = *lst;
		*lst = (*lst)->next;
		del(temp_node->content);
		free(temp_node);
	}
}
