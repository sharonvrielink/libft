/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/04 18:15:58 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/04 19:24:46 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	printf("in function lstlast\n"); // wordt niks geprint terwijl deze functie wel z'n werk doet in main.
	if (!lst)
		return (NULL);
	printf("in function lstlast\n");
	while(lst->next)
	{
		printf("lst->next = true\n");
		lst = lst->next;
	}
	return (lst);
}
