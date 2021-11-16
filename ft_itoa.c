/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 17:10:33 by svrielin      #+#    #+#                 */
/*   Updated: 2021/02/21 17:17:25 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	len;
	int		neg;

	len = ft_numlen(n);
	nbr = (char*)malloc((len + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	neg = 0;
	nbr[len] = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strcpy(nbr, "-2147483648"));
		neg = 1;
		n = -n;
		nbr[0] = '-';
	}
	while (len - neg > 0)
	{
		nbr[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (nbr);
}
