/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/07 10:04:01 by svrielin      #+#    #+#                 */
/*   Updated: 2022/12/04 17:22:54 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextnode;

	if (!lst)
		return ;
	while (*lst)
	{
		nextnode = (*lst)->next;
		(void)del;
		free(*lst);
		*lst = nextnode;
	}
	*lst = NULL;
}
