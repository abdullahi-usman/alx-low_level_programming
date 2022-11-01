#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
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
	char *buf;

	if (filename == NULL || letters == 0)
		return (read_no);

	buf = (char *)malloc(malloc_s);
	fd = open(filename, O_RDONLY);

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

	return (read_no);
}
