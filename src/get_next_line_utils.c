/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/22 18:26:03 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/08 16:43:39 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_gnlstrjoin(char *s1, char *s2)
{
	char	*joinedstr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	joinedstr = (char *)malloc((ft_strlen (s1) + ft_strlen (s2) + 1));
	if (!joinedstr)
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
