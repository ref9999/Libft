/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:58:25 by riel-fas          #+#    #+#             */
/*   Updated: 2024/11/07 13:38:28 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (*lst == 0)
		*lst = new;
	else
		(ft_lstlast(*lst))->next = new;
}
/*
#include <stdio.h>
int main()
{
	t_list *node1;
	t_list *node2;
	t_list *head;

	node1 = ft_lstnew("10");
	node2 = ft_lstnew("20");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);


}
*/
