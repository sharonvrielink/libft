/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printnumber_array.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/13 12:08:12 by svrielin      #+#    #+#                 */
/*   Updated: 2022/11/13 12:09:32 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	print_nbrarray(int *array, int len)
{
	int	i;

	i = 0;
	if (!array || len < 1)
		return ;
	while (i < len)
	{
		ft_printf("%d = [%d]\n", i, array[i]);
		i++;
	}
}
