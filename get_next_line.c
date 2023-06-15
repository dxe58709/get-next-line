#include "get_next_line.h"

int	get_line(int fd, char *memo, char *line)
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
	memo = read(fd, buf, BUFFER_SIZE);
