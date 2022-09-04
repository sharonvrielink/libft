/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/04 14:26:04 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/04 18:07:26 by svrielin      ########   odam.nl         */
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

int main(void)
{
	t_list *node1;
	t_list *node2;
    t_list *newnode;
	int one = 1;
	int two = 2;
	int zero = 0;
	
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	newnode = malloc(sizeof(t_list));
	
	node1->content = &one;
	node2->content = &two;
	newnode->content = &zero;
	
	node1->next = node2;
	node2->next = NULL;
	
	printf("node1 = %p\n&node1 = %p\n&node1->content = %p\nnode1->content = %p\n&one = %p\n\n", node1, &node1, &node1->content, node1->content, &one);
	printf("newnode = %p\n&newnode = %p\n\n", newnode, &newnode);
	printf("Before:\n");
	print_lst(node1);
	ft_lstadd_front(&node1, newnode);
	printf("After:\n");
	print_lst(node1);

}

// int	main(void)
// {
// 	tester(NULL);
// 	tester(1);
// 	tester(2);
// 	tester(3, {1, 2, 3});
// }