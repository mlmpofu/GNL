/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlmpofu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:44:00 by mlmpofu           #+#    #+#             */
/*   Updated: 2019/06/22 13:51:06 by mlmpofu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*string;

	if (!(string = ft_memalloc(size + 1)))
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		string[i++] = '\0';
	}
	return (string);
}
