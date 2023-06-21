/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: N <nsakanou@student.42tokyo.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:11:56 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/22 00:44:33 by N                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <ctype.h>
# include <string.h>
# include <limits.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

#ifndef BUFFER_SIZE

# define BUFFER_SIZE 42
#endif

char	*get_next_line(int fd);
char	*save_tmp(char *memo);
char	*get_line(char *memo);
char	*read_file(int fd, char *line);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_strchr(const char *s, int c);

#endif
