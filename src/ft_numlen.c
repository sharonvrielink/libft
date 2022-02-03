/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/03 17:15:53 by svrielin      #+#    #+#                 */
/*   Updated: 2022/02/03 17:21:15 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int numlen(int n)
{
	if (n < 0)
		return (1 + numlen(-n));
	else if (n < 10)
		return (1);
	else
		return (1 + numlen(n/10));
}