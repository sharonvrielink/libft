/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/03 17:15:53 by svrielin      #+#    #+#                 */
/*   Updated: 2022/04/12 17:37:13 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlen(int n)
{
	if (n == -2147483648)
		return (11);
	else if (n < 0)
		return (1 + ft_numlen(-n));
	else if (n < 10)
		return (1);
	else
		return (1 + ft_numlen(n / 10));
}
