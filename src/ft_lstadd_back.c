/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/04 18:35:14 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/07 10:08:53 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst && *lst && new)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else if (new)
		*lst = new;
}
