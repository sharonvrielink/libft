/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printstring.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/12 16:30:46 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/22 16:06:02 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	printstring(va_list args, int *len)
{
	char	*str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	ft_putstr_fd(str, 1);
	*len = *len + ft_strlen(str);
}
