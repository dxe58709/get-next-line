/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:52:00 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/27 17:05:03 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	size_t	total_len;
	char	*new;

	if (!s2)
		return (NULL);
	if (!s1)
		total_len = ft_strlen(s2);
	else
		total_len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc((total_len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	if (!s1)
		ft_strlcpy(new, s2, ft_strlen(s2) + 1);
	else
	{
		ft_strlcpy(new, s1, ft_strlen(s1) + 1);
		ft_strlcpy(new + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	}
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = (char)c;
	while (*s != '\0' || chr == '\0')
	{
		if (*s == chr)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
