/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: N <nsakanou@student.42tokyo.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:33:40 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/22 00:43:04 by N                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//read_line,分割するやつ、main

char	*get_line(char *memo)
{
	size_t	i;
	char	*line;

	i = 0;
	while (memo[i] && memo[i] != '\n')
		i++;
	if (!memo[i])//ヌル終端の時、つまり改行文字が見つからなかった時
	{
		free (memo);
		return (NULL);
	}
	line = malloc((i + 2) * (sizeof(char)));
	if (!line)
		return (NULL);
	ft_strlcpy(line, memo, (i + 1));
	return (line);
}

char	*save_tmp(char *memo)
{
	char	*tmp;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(memo);
	while (memo[i] && memo[i] != '\n')
		i++;
	tmp = (char *)malloc((len - i + 1) * (sizeof(char)));
	if (!tmp)
		return (NULL);
	ft_strlcpy(tmp, memo, (len - i + 1));
	return (tmp);
}

char	*read_file(int fd, char *line)
{
	char	*buf;
	size_t	readbyte;

	if (!line)
		return (NULL);

	buf = malloc((BUFFER_SIZE + 1) * (sizeof(char)));
	if (!buf)
		return (NULL);
	readbyte = 1;
	while (readbyte > 0)
	{
		readbyte = read(fd, buf, BUFFER_SIZE);
		if (readbyte == -1)//読み込んだreadがerrorの場合
		{
			free (buf);
			return (NULL);
		}
		buf[readbyte] = '\0';
		line = ft_strjoin(line, buf);
		if (ft_strchr(line, '\n'))
			break;
	}
	free (buf);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*buf;
	char		*line;
	static char	*save;
	size_t		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	save = read_file(fd, save);
	if (!save)
		return (NULL);
	line = get_line(save);
	save = save_tmp(save);
	return (line);
}
