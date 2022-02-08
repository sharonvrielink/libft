/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 15:41:14 by svrielin      #+#    #+#                 */
/*   Updated: 2022/02/08 19:26:33 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_numlen_base(long long n, int base)
{
	if (n < 0 && base == 10)
		return (1 + ft_numlen_base(-n, base));
	else if (n < base)
		return (1);
	else
		return (1 + ft_numlen_base(n/base, base));
}
