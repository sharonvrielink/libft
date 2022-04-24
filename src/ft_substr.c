/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 17:20:12 by svrielin      #+#    #+#                 */
/*   Updated: 2022/04/24 14:27:54 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*create_empty_string(void)
{
	char	*dest;

	dest = (char *)malloc(1 * sizeof(char));
	if (dest == 0)
		return (0);
	dest[0] = 0;
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == 0)
		return (0);
	if (ft_strlen(s) <= start)
		return (create_empty_string());
	while (s[start + i] != 0)
		i++;
	if (i < len)
		substr = (char *)malloc(i + 1);
	else
		substr = (char *)malloc(len + 1);
	if (substr == 0)
		return (0);
	if (i < len)
		ft_strlcpy(substr, &s[start], i + 1);
	else
		ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
