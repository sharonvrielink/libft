/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printhex.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 16:50:43 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/22 16:05:45 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	printhex(va_list args, int *len)
{
	unsigned int	nbr;
	char			*str;

	nbr = va_arg(args, unsigned int);
	str = ft_ulltoa_base(nbr, 16);
	if (!str)
		return ;
	ft_putstr_fd(str, 1);
	free(str);
	*len += ft_unsignednumlen_base(nbr, 16);
}
