/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasalced <lasalced@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 10:39:50 by lasalced          #+#    #+#             */
/*   Updated: 2015/04/01 17:30:41 by lasalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"


int				ft_read(const int fd, char *buf, char **line)
{
	int			ret;
	static char	*str;

	if (!str)
		str = ft_strnew(0);
	while (!(ft_strchr(str, '\n')) && (ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = 0;
		str = ft_strjoin(str, buf);
	}
	if (ft_strchr(str, '\n') || ((*line == ft_strdup(str)) && 0))
		*line = ft_strsub(str, 0, ft_strchr(str, '\n') - str + 1);
	if (ret)
		line[0][ft_strlen(*line) - 1] = 0;
	str = ft_strsub(str, ft_strchr(str, '\n') - str + 1, \
		ft_strlen(ft_strchr(str, '\n')));
	if (ret == 0)
		return (0);
	else
		return (1);
}

int				get_next_line(int const fd, char **line)
{
	char		buf[BUFF_SIZE + 1];

	if (!line || BUFF_SIZE <= 0)
		return (-1);
	return (ft_read(fd, buf, line));
}
