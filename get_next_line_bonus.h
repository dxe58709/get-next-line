/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:52:06 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/27 17:17:51 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <sys/types.h>
# include <sys/uio.h>
# include <ctype.h>
# include <string.h>
# include <limits.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <libc.h>

# ifndef BUFFER_SIZE

#  define BUFFER_SIZE 10
# endif

char	*ft_free(char *str);
char	*join_line(int fd, char *line);
char	*get_line(char *memo);
char	*save_tmp(char *memo);
char	*get_next_line(int fd);

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);

#endif