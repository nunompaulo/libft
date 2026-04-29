/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:26:42 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:52:38 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Iterates a list and creates a new list from the applied results.
**
** runs the list 'lst' and applies the function 'f' to the content of 
** each node to create a new list. If a memory allocation fails during 
** the process, the function uses 'del' to delete the content of the 
** nodes already created and clears the new list entirely.
**
** @param lst A pointer to the first node of the list.
** @param f The address of the function to be applied to each element.
** @param del The address of the function used to delete the content 
**            if needed.
** @return A pointer to the new list, or NULL if allocation fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*temp_f;

	new_list = 0;
	while (lst)
	{
		temp_f = f(lst->content);
		new_node = ft_lstnew(temp_f);
		if (!new_node)
		{
			if (temp_f)
				del(temp_f);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
