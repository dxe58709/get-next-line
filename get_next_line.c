/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:33:40 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/19 20:02:52 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//read_line,分割するやつ、main

char	*get_line(char *memo)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!memo[i])
		return (NULL);
	while (memo[i] && memo[i] != '\n')
		i++;
	line = (char *)malloc((i + 2) * (sizeof(char)));
	if (!line)
		return (NULL);
	ft_strlcpy(line, memo, (i + 2));
	return (line);
}

char	*save_tmp(char *memo)
{
	char	*tmp;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(*memo);
	while (memo[i] && memo[i] != '\n')
		i++;
	tmp = (char *)malloc((len - i + 1) * (sizeof(char)));
	if (!tmp)
		return (NULL);
	ft_strlcpy(tmp, memo, (len - i + 1));
	return (tmp);
}

char	*get_next_line(int fd)
{
	char		*buf;
	char		*line;
	static char	*save;
	ssize_t		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buf = (char *)malloc((BUFFER_SIZE + 1) * (sizeof(char)));
	if (!buf)
		return (NULL);
	bytes_read = read(fd, buf, BUFFER_SIZE);
	buf[bytes_read] = '\0';
	line = get_line(buf);
	save = save_tmp(buf);
	return (line);
}
