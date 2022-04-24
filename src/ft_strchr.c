/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 10:32:17 by svrielin      #+#    #+#                 */
/*   Updated: 2022/04/24 14:26:58 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *) s;
	while (*str != '\0')
	{
		if (*str != (char) c)
			str++;
		else
			return (str);
	}
	if (*str == (char) c)
		return (str);
	return (NULL);
}
