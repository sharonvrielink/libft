/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/29 16:51:09 by svrielin      #+#    #+#                 */
/*   Updated: 2021/11/16 12:18:02 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != 0)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((i + j) < len && needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
			if (needle[j] == 0)
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
