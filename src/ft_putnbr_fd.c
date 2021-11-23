/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 17:45:46 by svrielin      #+#    #+#                 */
/*   Updated: 2021/02/21 17:47:26 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	smallestint(int nb)
{
	if (nb == -2147483648)
		return (1);
	else
		return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		checksmallest;

	checksmallest = smallestint(n);
	if (checksmallest == 0)
	{
		if (n < 0)
		{
			n = n * -1;
			write(fd, "-", 1);
		}
		if (n <= 9)
		{
			c = n + '0';
			write(fd, &c, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
	}
	else
		write(fd, "-2147483648", 11);
}
