/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlmpofu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 06:11:18 by mlmpofu           #+#    #+#             */
/*   Updated: 2019/07/08 13:43:51 by mlmpofu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

int				ft_newline(char **str, char **line, int fd, int checker)
{
	unsigned int	i;
	unsigned int	length;
	char			*tmp;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\n')
	{
		length = i;
		*line = ft_strsub(str[fd], 0, length);
		tmp = ft_strdup(str[fd] + length + 1);
		free(str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\0')
	{
		if (checker == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char	*tmp_fd[150];
	char		buf[BUFF_SIZE + 1];
	char		*temp;
	int			results;

	if (fd < 0 || !line)
		return (-1);
	while ((results = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[results] = '\0';
		if (tmp_fd[fd] == NULL)
			tmp_fd[fd] = ft_strnew(1);
		temp = ft_strjoin(tmp_fd[fd], buf);
		free(tmp_fd[fd]);
		tmp_fd[fd] = temp;
		if (ft_strchr(tmp_fd[fd], '\n'))
			break ;
	}
	if (results < 0)
		return (-1);
	else if (results == 0 && (tmp_fd[fd] == NULL || tmp_fd[fd][0] == '\0'))
		return (0);
	return (ft_newline(tmp_fd, line, fd, results));
}
