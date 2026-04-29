/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:14:43 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:52:28 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Creates a new list node.
**
** Allocates memory for a new element of type t_list and initializes its 
** content with the value passed as an argument. The 'next' pointer is 
** initialized to NULL to indicate that it is currently an isolated node.
**
** @param content The content to be added to the new node.
** @return A pointer to the new node, or NULL if memory allocation fails.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}
