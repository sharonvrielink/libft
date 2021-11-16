/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 10:46:34 by sharonvriel   #+#    #+#                 */
/*   Updated: 2021/02/08 14:05:02 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*str;

	str = b;
	i = 0;
	while (i < (int)len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
