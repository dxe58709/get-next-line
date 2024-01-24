<h1 align = "center">
Get Next Line
</h1>

## Summary
> <i>This project is to create a function that returns a line read from a file descriptor with no newlines. If called in a loop, get_next_line returns the entire contents of a file, line by line until it reaches the end of the file. It can be compiled with any buffer size.</i>

## Usage
This function is not a stand-alone program, its files must be included and compiled within another project.

First, clone this repository and `cd` into it:

```zsh
$ git clone https://github.com/dxe58709/get_next_line; cd get_next_line
```

Example ``main.c``:
```c
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int	fd;
	char	*line;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	line = "";
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
	fd = close(fd);
	return (0);
}
```

Compilation:
```bash
$ gcc main.c get_next_line.c get_next_line_utils.c
```

``BUFFER_SIZE`` can be specified at compilation to override the default ``BUFFER_SIZE``:

```zsh
$ gcc -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
```

Or use the following command to compile it with the bonus files:

```zsh
$ gcc -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c
```

Execution:
```bash
$ ./a.out [file]
```
Output should show the entire contents of the given file.

Execution with stdin:
```bash
$ ./a.out /dev/tty
```
Program will wait for input, then once the enter key is pressed, print out the input as well as get_next_line's output. The process can be killed with ``ctrl-c``.
