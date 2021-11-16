/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 16:10:58 by svrielin      #+#    #+#                 */
/*   Updated: 2021/02/21 17:25:11 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*string;

	string = (unsigned char *) s;
	i = 0;
	while (i < (int) n)
	{
		if (*string != (unsigned char) c)
		{
			string++;
			i++;
		}
		else
			return (string);
	}
	return (NULL);
}
