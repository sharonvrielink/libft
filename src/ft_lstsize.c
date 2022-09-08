/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/04 18:07:57 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/08 19:12:46 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lstlen;

	lstlen = 0;
	while (lst)
	{
		lstlen++;
		lst = lst->next;
	}
	return (lstlen);
}
