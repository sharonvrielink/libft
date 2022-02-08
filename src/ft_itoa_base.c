/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 11:32:58 by svrielin      #+#    #+#                 */
/*   Updated: 2022/02/08 19:26:18 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(long long n, int base)
{
	char	*nbr;
	size_t	len;
	int		negative;
	int		temp;
	
	len = ft_numlen_base(n, base);
	nbr = (char *)malloc((len + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	negative = 0;
	temp = 0;
	nbr[len] = '\0';
	if (n == 0)
		nbr[0] = '0';
	if (n < 0 && base == 10)
	{
		negative = 1;
		n = -n;
		nbr[0] = '-';
	}
	while((len - negative) > 0)
	{
		temp = n % base;
		if (temp > 9 && temp <= base)
			temp += 87;
		else
			temp += '0';
		nbr[len - 1] = temp;
		n = n / base;
		len--;
	}
	return(nbr);
}
