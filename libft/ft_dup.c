/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlmpofu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:31:55 by mlmpofu           #+#    #+#             */
/*   Updated: 2019/06/22 10:16:31 by mlmpofu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_dup(void const *content, size_t content_size)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	void			*new;

	if (!(new = ft_memalloc(content_size)))
		return (NULL);
	ptr = (unsigned char*)content;
	ptr2 = (unsigned char*)new;
	while (*ptr)
		*(ptr2++) = *(ptr++);
	return (new);
}
