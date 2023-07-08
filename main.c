/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:21:21 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/27 23:35:58 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "get_next_line_bonus.h"

// __attribute__((destructor))
// static void destructor() {
//     system("leaks -q a.out");
// }

// int	main(void)
// {
// 	int i = 0;
// 	int fd = open("a.txt",O_RDONLY);
// 	while(i++ < 10)
// 	{
// 		char *line = get_next_line(fd);
// 		printf ("%d:%s",i,line);
// 		free(line);
// 	}
// 	return (0);
// }

#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int fd;
	int fd2;
	int	i;
	
	//char txt[100];

	//scanf("%s", txt);
	fd = open("a.txt", O_RDONLY);
	fd2 = open("b.txt", O_RDONLY);
	//printf("%d\n", fd);
	// i = 1;
	// while (i < 7)
	// {
	// 	char *line = get_next_line(fd);
	// 	//printf("[main%d]:[line:%s]%s", i, line, line);
    //     printf("[main%d] :%s", i, line);
	// 	i++;
	// }
	i = 1;
	 printf("%s", get_next_line(fd));
	 printf("%s", get_next_line(42));
	//  printf("%s", get_next_line(0));
	//  printf("%s", get_next_line(0));
	// printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}

// #include <fcntl.h>
// #include <stdio.h>
// #include <unistd.h>

// int    main(int argc, char *argv[])
// {
//     int    fd;
//     int    i;

//     argc = 0;
//     i = 1;
//     fd = open(argv[1], O_RDONLY);
//     while (i <= 11)
//     {
//         printf("|%d : %s", i, get_next_line(fd));
//         i++;
//     }
//     close(fd);
//     return (0);
// }


// printf("\n[save];%s\n",save);