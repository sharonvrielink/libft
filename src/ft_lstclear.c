/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/07 10:04:01 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/08 19:13:17 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextnode;

	if (lst && *lst && del)
	{
		while (*lst)
		{
			nextnode = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = nextnode;
		}
		*lst = NULL;
	}
}
