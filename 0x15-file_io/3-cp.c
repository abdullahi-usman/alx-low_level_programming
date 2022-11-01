#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - check the code
 *
 * @ac: the argc
 * @av: the argv
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_from, file_to, rd, read_bytes_buf = sizeof(char) * 1024;
	char *buf = (char *)malloc(read_bytes_buf);

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to", av[0]);
		exit(97);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT,
				   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	file_from = open(av[1], O_RDONLY);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[1]);
		exit(99);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}

	while ((rd = read(file_from, buf, read_bytes_buf)) > 0)
	{
		write(file_to, buf, rd);
	}

	free(buf);
	file_from = close(file_from);
	file_to = close(file_to);

	if (file_from != 0 || file_to != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d",
				file_from != 0 ? file_from : file_to);
		exit(0);
	}

	return (0);
}
