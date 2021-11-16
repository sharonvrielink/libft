/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:03:04 by sharonvriel   #+#    #+#                 */
/*   Updated: 2021/11/16 13:19:10 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = ft_strlen(s);
	write(fd, s, i);
}
