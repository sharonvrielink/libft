/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 15:41:14 by svrielin      #+#    #+#                 */
/*   Updated: 2022/03/16 20:58:38 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_numlen_base(long long n, int base)
{
	size_t i;
	
	i = 1;
	while (n >= base)
	{
		n /= base;
		i++;
	}
	return (i);
}
