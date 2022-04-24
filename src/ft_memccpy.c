/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 13:57:21 by svrielin      #+#    #+#                 */
/*   Updated: 2022/04/24 14:16:55 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int					i;
	unsigned char		*dest;
	unsigned const char	*source;

	dest = dst;
	source = src;
	i = 0;
	while (i < (int) n)
	{
		dest[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
