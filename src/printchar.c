/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printchar.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 16:29:09 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/22 16:03:35 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	printchar(va_list args, int *len)
{
	ft_putchar_fd(va_arg(args, int), 1);
	*len += 1;
}
