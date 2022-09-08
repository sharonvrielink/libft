/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 17:20:12 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/08 16:00:51 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
