/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/04 14:26:04 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/07 13:01:50 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	print_lst(t_list *lst)
{
	while (lst)
	{
		printf("Content lst = %d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

void	lst_tester(int size, t_list *node, int *data)
{
	t_list *head = NULL;
	t_list *prev = NULL;
	int i;

	i = 0;
	while (i < size)
	{
		node = ft_lstnew(&data[i]);
		if (prev)
			prev->next = node;
		prev = node;
		if (!head)
			head = node;
		node = node->next;
		i++;
	}
	print_lst(head);
	head = ft_lstlast(head);
	print_lst(head);
}

int main(void)
{
	t_list *node = NULL;
	//t_list *node1;
	// t_list *node2;
    //t_list *newnode;
	//int one = 1;

	lst_tester(1, node, NULL);
	lst_tester(1, node, (int []){1});
	lst_tester(2, node, (int []){1 ,2});
	lst_tester(3, node, (int []){1 ,2, 3});
	//int two = 2;
	//int zero = 0;
	
	//node1 = malloc(sizeof(t_list));
	//node2 = malloc(sizeof(t_list));
	//newnode = malloc(sizeof(t_list));
	
	//node1->content = &one;
	//node2->content = &two;
	//newnode->content = &zero;
	
	//node1->next = node2;
	//node2->next = NULL;
	
	// printf("node1 = %p\n&node1 = %p\n&node1->content = %p\nnode1->content = %p\n&one = %p\n\n", node1, &node1, &node1->content, node1->content, &one);
	// printf("newnode = %p\n&newnode = %p\n\n", newnode, &newnode);
	// printf("Before:\n");
	// print_lst(node1);
	// ft_lstadd_front(&node1, newnode);
	// printf("After:\n");
	// print_lst(node1);
	// node2 = ft_lstlast(node2);
	// printf("After ft_lstlast:\n");
	// print_lst(node2);
	//ft_lstadd_back(&node1, newnode);
	//print_lst(node1);

}

// int	main(void)
// {
// 	tester(NULL);
// 	tester(1);
// 	tester(2);
// 	tester(3, {1, 2, 3});
// }