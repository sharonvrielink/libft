/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 13:15:48 by svrielin      #+#    #+#                 */
/*   Updated: 2022/04/24 14:27:11 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joinedstr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	joinedstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (joinedstr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		joinedstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joinedstr[i] = s2[j];
		i++;
		j++;
	}
	joinedstr[i] = '\0';
	return (joinedstr);
}
