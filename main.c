/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlmpofu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 06:27:26 by mlmpofu           #+#    #+#             */
/*   Updated: 2019/07/08 13:07:01 by mlmpofu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		ln;
	char	lin;

	ln = 0;
	fd = open(argv[1], O_RDONLY);
	line = NULL;
	if (!argc)
		return (0);
	while ((get_next_line(fd, &line)) > 0)
	{
		ln++;
		lin = ln + 48;
		write(1, &lin, 1);
		write(1, " :", 2);
		ft_putendl(line);
		free(line);
		line = NULL;
	}
	return (0);
}
