/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlmpofu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:02:40 by mlmpofu           #+#    #+#             */
/*   Updated: 2019/06/22 12:57:22 by mlmpofu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int	i;

	i = 0;
	if (!s1 || !s2)
	{
		return (s1 == s2 ? 1 : 0);
	}
	if (ft_strlen((char*)s1) != ft_strlen((char*)s2))
	{
		return (0);
	}
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
