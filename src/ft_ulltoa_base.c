/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ulltoa_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 11:32:58 by svrielin      #+#    #+#                 */
/*   Updated: 2022/04/24 14:28:04 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_ulltoa_base(unsigned long long n, int base)
{
	char	*nbr;
	size_t	len;
	int		temp;

	len = ft_unsignednumlen_base(n, base);
	nbr = (char *)malloc((len + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	temp = 0;
	nbr[len] = '\0';
	if (n == 0)
		nbr[0] = '0';
	while (len > 0)
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
	return (nbr);
}
