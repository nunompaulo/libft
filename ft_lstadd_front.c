/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaulo <npaulo@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:30:34 by npaulo            #+#    #+#             */
/*   Updated: 2026/04/28 09:53:30 by npaulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief Adds a new element at the beginning of a linked list.
**
** Checks if the new element is valid and points its 'next' pointer to the 
** current first node of the list. Then, it updates the head of the list 
** to point to this new element, effectively making it the new first node.
**
** @param lst A pointer to the pointer of the first node in the list.
** @param new A pointer to the new node to be added to the list.
** @return None (void).
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
** int	main(void)
** {
** 	t_list	*head = NULL;
** 	t_list	*node1;
** 	t_list	*node2;
** 	t_list	*temp;
** 
** 	node1 = ft_lstnew("Mundo!");
** 	head = node1;
** 
** 	node2 = ft_lstnew("Olá ");
** 
** 	ft_lstadd_front(&head, node2);
** 
** 	temp = head;
** 	while (temp)
** 	{
** 		printf("%s", (char *)temp->content);
** 		temp = temp->next;
** 	}
** 	printf("\n");
** 
** 	free(node1);
** 	free(node2);
** 
** 	return (0);
** }
*/
