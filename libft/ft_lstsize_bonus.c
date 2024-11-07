/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:45:04 by riel-fas          #+#    #+#             */
/*   Updated: 2024/11/04 15:56:50 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*#include<stdio.h>
int main()
{
	t_list *node;
	t_list *node2;
	t_list *node3;
	t_list *head;
	t_list *copy;

	node = ft_lstnew("8");
	ft_lstadd_front(&head, node);
	node2 = ft_lstnew("7");
	ft_lstadd_front(&head, node2);
	node3 = ft_lstnew("6");
	ft_lstadd_front(&head, node3);
	copy = head;
	 while(head)
	 {
		printf("%s\n", head->content);
		head = head->next;
	 }
	 printf("size = %d\n", ft_lstsize(copy));


}*/
