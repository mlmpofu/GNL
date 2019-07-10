/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcntfirstchar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlmpofu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:13:03 by mlmpofu           #+#    #+#             */
/*   Updated: 2019/06/22 12:55:22 by mlmpofu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	ft_strcntfirstchar(char *str, const char *charset)
{
	char			*ptr;
	int				index;
	unsigned int	count;
	unsigned int	tmp;

	ptr = str;
	count = 0;
	while (*ptr)
	{
		index = 0;
		tmp = count;
		while (charset[index])
		{
			if (charset[index++] == *ptr)
			{
				count++;
			}
		}
		if (count == tmp)
		{
			return (count);
		}
		ptr++;
	}
	return (count);
}
