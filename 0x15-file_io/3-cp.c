#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <limits.h>
#include "main.h"

/**
 * get_file_at_current_loc - get file at curent location
 * @name: the name
 * Return: the new file name
 */
char *get_file_at_current_loc(char *name)
{
	char *n_filename, *wd = NULL;

	n_filename = (char *)malloc(PATH_MAX);
	wd = getcwd(wd, 0);

	strcpy(n_filename, wd);
	strcpy(n_filename + strlen(n_filename), "/");
	strcpy(n_filename + strlen(n_filename), name);

	return (n_filename);
}

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

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to", av[0]);
		exit(97);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT,
				   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	file_from = open(get_file_at_current_loc(av[1]), O_RDONLY);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[1]);
		exit(99);
	}
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	while ((rd = read(file_from, buf, read_bytes_buf)) > 0)
	{
		write(file_to, buf, rd);
	}

	file_from = close(file_from);
	file_to = close(file_to);
	free(buf);

	if (file_from != 0 || file_to != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d",
				file_from != 0 ? file_from : file_to);
		exit(0);
	}

	return (0);
}
