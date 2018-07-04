/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:35:40 by thomkim           #+#    #+#             */
/*   Updated: 2018/05/21 13:35:41 by thomkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_line(int fd, char **data, char **line)
{
	char	*temp;
	int		i;

	i = 0;
	while (data[fd][i] != '\n' && data[fd][i] != '\0')
		i++;
	if (data[fd][i] == '\n')
	{
		*line = ft_strsub(data[fd], 0, i);
		temp = ft_strdup(data[fd] + i + 1);
		ft_strdel(&data[fd]);
		data[fd] = temp;
		if (data[fd][0] == '\0')
			ft_strdel(&data[fd]);
	}
	else if (data[fd][i] == '\0')
	{
		*line = ft_strdup(data[fd]);
		ft_strdel(&data[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int			ret;
	char		buf[BUFF_SIZE + 1];
	static char	*data[1023];
	char		*temp;

	if (fd < 0 || BUFF_SIZE < 1 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (data[fd] == NULL)
			data[fd] = ft_strnew(1);
		temp = ft_strjoin(data[fd], buf);
		ft_strdel(&data[fd]);
		data[fd] = temp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && data[fd] == NULL)
		return (0);
	return (get_line(fd, data, line));
}
