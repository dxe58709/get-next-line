/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:11:56 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/16 15:34:01 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <ctype.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif
