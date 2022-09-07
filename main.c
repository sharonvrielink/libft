/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/07 13:02:19 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/07 13:22:02 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	print_lst(t_list *lst)
{
	while (lst)
	{
		printf("Content lst = %d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

void * addOne(void * p) 
{
	void * r = malloc(sizeof(int)); 
	*(int*)r = *(int*)p + 1; 
	return (r);
}

int main(void)
{
	t_list *l = ft_lstnew(strdup(" a b c "));
 	t_list *ret;

 	l->next = ft_lstnew(strdup("ss"));
 	l->next->next = ft_lstnew(ft_strdup("-_-"));
 	ret = ft_lstmap(l, addOne, free);
	printf("l:\n");
	print_lst(l);
	printf("ret:\n");
	print_lst(ret);
 	// if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
 	// 	printf("TEST_SUCCESS");
 	// printf("TEST_FAILED");
}
