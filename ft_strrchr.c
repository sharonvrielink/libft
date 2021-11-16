/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 16:49:47 by svrielin      #+#    #+#                 */
/*   Updated: 2021/02/21 18:24:46 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*found;

	str = (char*)s;
	found = NULL;
	while (*str != 0)
	{
		if (*str == c)
			found = str;
		str++;
	}
	if (*str == c)
		return (str);
	return (found);
}
