/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 12:45:30 by svrielin      #+#    #+#                 */
/*   Updated: 2022/04/24 14:26:19 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	int				j;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	i = 0;
	j = len - 1;
	if (!dest && !source)
		return (NULL);
	if (dest < source)
	{
		dest = ft_memcpy(dst, src, len);
	}
	else
	{
		while (j >= 0)
		{
			dest[j] = source[j];
			j--;
		}
	}
	return (dst);
}
