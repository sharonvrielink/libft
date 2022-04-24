/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 16:00:01 by sharonvriel   #+#    #+#                 */
/*   Updated: 2022/04/24 14:16:22 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	int		i;

	str = s;
	i = 0;
	while (i < (int)n)
	{
		str[i] = '\0';
		i++;
	}
}
