/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:02:53 by sharonvriel   #+#    #+#                 */
/*   Updated: 2021/02/21 17:46:35 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	ssize_t	error;

	error = write(fd, &c, sizeof(char));
	if (error == -1)
		return ;
}
