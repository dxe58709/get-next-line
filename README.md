<h1 align = "center">
Get Next Line
</h1>

## Summary
> <i>This project is to create a function that returns a line read from a file descriptor with no newlines. If called in a loop, get_next_line returns the entire contents of a file, line by line until it reaches the end of the file. It can be compiled with any buffer size.</i>

## Getting started

First, clone this repository and `cd` into it:

```zsh
$ git clone https://github.com/dxe58709/get_next_line; cd get_next_line
```

Compile the executable file with:

```zsh
$ gcc -Wall -Wextra -Werror -D BUFFER_SIZE=xx get_next_line.c get_next_line_utils.c get_next_line.h
```
__You must change the xx part to any value.__

Or use the following command to compile it with the bonus files:

```zsh
$ gcc -Wall -Wextra -Werror -D BUFFER_SIZE=xx get_next_line_bonus.c get_next_line_utils_bonus.c get_next_line_bonus.h
```
