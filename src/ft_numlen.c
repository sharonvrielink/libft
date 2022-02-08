/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/03 17:15:53 by svrielin      #+#    #+#                 */
/*   Updated: 2022/02/08 10:14:48 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_numlen(int n)
{
	if (n < 0)
		return (1 + ft_numlen(-n));
	else if (n < 10)
		return (1);
	else
		return (1 + ft_numlen(n/10));
}
