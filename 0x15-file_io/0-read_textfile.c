#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include "main.h"

/**
 * read_textfile - read a file
 * @filename: the file name
 * @letters: number of letters to read
 * Return: the number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, malloc_s = sizeof(char) * letters;
	ssize_t read_no = 0;
	char *buf, *n_filename, *wd = NULL;

	wd = getcwd(wd, 0);

	if (filename == NULL || letters == 0)
		return (read_no);

	n_filename = (char *)malloc(PATH_MAX);
	strcpy(n_filename, wd);
	strcpy(n_filename + strlen(n_filename), "/");
	strcpy(n_filename + strlen(n_filename), filename);

	free(wd);
	fd = open(n_filename, O_RDONLY);
	buf = (char *)malloc(sizeof(char) * letters);

	if (fd != -1 && buf != NULL)
	{
		read_no = read(fd, buf, malloc_s);

		if (read_no != -1)
		{
			if (write(STDIN_FILENO, buf, read_no) != -1)
				read_no /= sizeof(char);
		}
		else
		{
			read_no = 0;
		}
	}

	free(n_filename);
	return (read_no);
}
