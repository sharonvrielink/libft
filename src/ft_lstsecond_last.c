/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsecond_last.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/14 19:48:11 by svrielin      #+#    #+#                 */
/*   Updated: 2022/12/04 17:23:25 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstsecond_last(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->next)
	{
		lst = lst->next;
	}
	return (lst);
}
