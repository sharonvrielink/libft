/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printnumber.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 16:31:54 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/22 16:05:52 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	printnumber(va_list args, int *len)
{
	int	nbr;

	nbr = va_arg(args, int);
	ft_putnbr_fd(nbr, 1);
	*len += ft_numlen(nbr);
}
