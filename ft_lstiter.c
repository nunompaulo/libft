/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:25:13 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:53:00 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Iterates a list and applies a function to the content of each node.
**
** Runs the list from the beginning to the end and applies the function 
** 'f' to the content of each element in the sequence.
**
** @param lst A pointer to the first node of the list.
** @param f The address of the function to be applied to each element.
** @return None (void).
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
