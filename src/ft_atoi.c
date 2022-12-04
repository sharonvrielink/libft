/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:31:01 by sharonvriel   #+#    #+#                 */
/*   Updated: 2022/12/04 17:21:54 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
			return (0);
		if (number * negpos > 2147483647)
			return (0);
	}
	return ((int) number * negpos);
}
