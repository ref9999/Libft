/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riel-fas <riel-fas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:26:57 by riel-fas          #+#    #+#             */
/*   Updated: 2024/11/04 18:48:15 by riel-fas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*#include <stdio.h>
int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*head;
	t_list	*copy;

	node2 = ft_lstnew("1");
	ft_lstadd_front(&head, node2);

	node1 = ft_lstnew("2");
	ft_lstadd_front(&head, node1);

	while (head)
	{
		head = head->next;
	}
	copy = head;
	printf("last node : %s\n",(char *)copy);

}*/
// #include "libft.h"
/*#include <stdio.h>

int main(void)
{
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *last;

    node1 = ft_lstnew("First");
    node2 = ft_lstnew("Second");
    node3 = ft_lstnew("Third");

    node1->next = node2;
    node2->next = node3;

    last = ft_lstlast(node1);

    if (last)
        printf("Last node content: %s\n", (char *)last->content);
    else
        printf("List is empty or an error occurred.\n");

    // Free allocated memory (optional, but good practice)
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
