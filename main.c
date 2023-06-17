/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:50:46 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/17 21:46:25 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int	main()
{
	int	i = 0;
	int	fd = open("a.txt", O_RDONLY);
			printf("fd:%d\n", fd);
				int	fd1 = open("a.txt", O_RDONLY);
			printf("fd:%d\n", fd1);
				int	fd2= open("a.txt", O_RDONLY);
			printf("fd:%d\n", fd2);
				int	fd3 = open("a.txt", O_RDONLY);
			printf("fd:%d\n", fd3);
	while (i++ < 10)
	{
		char	*line = (char *)calloc(3 + 1, sizeof(char));
		read(fd, line, 3); //3がbuffersize

		printf("%d:%s", i, line);
		free(line);
	}
	close(fd);
	return (0);
}