/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printhex_upper.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 16:51:11 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/22 16:04:24 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	printhex_upper(va_list args, int *len)
{
	unsigned int	nbr;
	char			*str;

	nbr = va_arg(args, unsigned int);
	str = ft_ulltoa_base(nbr, 16);
	if (!str)
		return ;
	str = ft_strtoupper(str);
	ft_putstr_fd(str, 1);
	free(str);
	*len += ft_unsignednumlen_base(nbr, 16);
}
