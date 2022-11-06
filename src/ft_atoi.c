/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:31:01 by sharonvriel   #+#    #+#                 */
/*   Updated: 2022/11/06 10:57:57 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi_error(t_int_error errorcode)
{
	if (errorcode == INT_TOOBIG)
	{
		ft_putstr_fd("Number is bigger than max int\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	if (errorcode == INT_TOOSMALL)
	{
		ft_putstr_fd("Number is smaller then min int\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	long long	number;
	int			negpos;

	number = 0;
	negpos = 1;
	while (*str == ' ' || *str == '\t' || *str == '\f' || *str == '\r'
		|| *str == '\n' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negpos = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
		if (number * negpos < -2147483648)
			ft_atoi_error(INT_TOOSMALL);
		if (number * negpos > 2147483647)
			ft_atoi_error(INT_TOOBIG);
	}
	return ((int) number * negpos);
}
