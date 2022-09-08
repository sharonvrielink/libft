/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_empty_string.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/08 15:59:16 by svrielin      #+#    #+#                 */
/*   Updated: 2022/09/08 15:59:54 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*create_empty_string(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}
