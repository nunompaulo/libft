/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:21:50 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:53:09 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Deletes a single element from the list.
**
** Uses the function 'del' supplied as a parameter to free the content of 
** the node, and then frees the node itself. The memory of 'next' must 
** not be freed.
**
** @param lst The element to be deleted.
** @param del The address of the function used to delete the content.
** @return None (void).
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
