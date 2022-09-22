/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printpointer.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 16:51:55 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/22 16:05:57 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	printpointer(va_list args, int *len)
{
	char			*str;
	unsigned long	p;

	p = (unsigned long)va_arg(args, void *);
	ft_putstr_fd("0x", 1);
	str = ft_ulltoa_base(p, 16);
	if (!str)
		return ;
	ft_putstr_fd(str, 1);
	free(str);
	*len = 2 + (*len + ft_unsignednumlen_base(p, 16));
}
