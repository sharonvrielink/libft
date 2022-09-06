/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/06 20:31:55 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/06 20:53:10 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void(*del)(void *))
{
	if (lst && lst->content)
		del(lst->content);
	if (lst)
		del(lst);
}
