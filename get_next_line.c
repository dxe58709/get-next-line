/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:33:40 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/17 21:53:11 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//read_line,分割するやつ、main

char	*read_line(int fd, char *memo, char *line)
{
	char	*buf;
	ssize_t	n;

	buf = (char *)malloc(() * (sizeof(char)));
	if (!buf)
		return (NULL);
}

char	*get_line(int fd, char *memo, char *line) //分割するやつ入れる
{
	size_t	i;

	i = 0;
	while (memo[i] && memo[i] != '\n')
		i++;
	line = (char *)malloc((i + 2) * (sizeof(char)));
	if (!line)
		return (NULL);
	ft_strlcpy(line, memo, (i + 2));
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*memo;
	char		*line;
	char		*buf;
	ssize_t		n;

	if (!memo || BUFFER_SIZE < 0)
		return (NULL);
