/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 14:58:29 by svrielin      #+#    #+#                 */
/*   Updated: 2021/02/21 17:00:43 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmedstr;
	int		start;
	int		end;
	int		i;

	start = 0;
	if (set == 0 || s1 == 0)
		return (0);
	while (s1[start] && check_char(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_char(s1[end - 1], set))
		end--;
	trimmedstr = (char *)malloc((end - start + 1) * sizeof(char));
	if (trimmedstr == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trimmedstr[i] = s1[start];
		start++;
		i++;
	}
	trimmedstr[i] = '\0';
	return (trimmedstr);
}
