/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 17:19:23 by svrielin      #+#    #+#                 */
/*   Updated: 2021/02/21 17:50:18 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	if (*s == 0)
		return (0);
	count = 1;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != 0)
	{
		if (s[i] == c && i != 0)
		{
			count++;
			while (s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] == c)
		return (count - 1);
	return (count);
}

static char	*ft_strndup(char const *s, size_t n)
{
	char	*dest;
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	if (i < n)
		dest = (char*)malloc((i + 1) * sizeof(char));
	else
		dest = (char*)malloc((n + 1) * sizeof(char));
	if (dest == 0)
		return (0);
	if (i < n)
		dest[i] = 0;
	else
		dest[n] = 0;
	i = 0;
	while (i < n && s[i] != 0)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}

static size_t	find_delimiter(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static size_t	ft_free(char **strings, size_t index)
{
	while (index > 0)
	{
		free(strings[index - 1]);
		index--;
	}
	free(strings);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		wrd;
	int		i;

	if (s == NULL)
		return (NULL);
	wrd = ft_count_words(s, c);
	splitted = (char**)malloc((wrd + 1) * sizeof(char*));
	if (splitted == NULL)
		return (NULL);
	splitted[wrd] = 0;
	wrd = 0;
	i = 0;
	while (s[wrd] != 0)
	{
		if (s[wrd] != c)
		{
			splitted[i++] = ft_strndup(&(s[wrd]), find_delimiter(&(s[wrd]), c));
			if (splitted[i - 1] == 0)
				return ((char**)ft_free(splitted, i - 1));
			wrd = wrd + find_delimiter(&(s[wrd]), c) - 1;
		}
		wrd++;
	}
	return (splitted);
}
