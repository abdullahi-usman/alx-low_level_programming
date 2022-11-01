#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content) * sizeof(char)) != -1)
			return 1;
	}

	close(fd);
	return (fd);
}