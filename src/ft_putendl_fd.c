/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:54:17 by sharonvriel   #+#    #+#                 */
/*   Updated: 2021/02/21 17:46:58 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s && fd)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i = i + 1;
		}
		write(fd, "\n", 1);
	}
}
