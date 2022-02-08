/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 11:32:58 by svrielin      #+#    #+#                 */
/*   Updated: 2022/02/08 12:25:00 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_numlen_base(long long n, int base)
{
	if (n < 0)
		return (1 + ft_numlen(-n));
	else if (n < 10)
		return (1);
	else
		return (1 + ft_numlen(n/10));
}

char	*itoa(size_t n, )