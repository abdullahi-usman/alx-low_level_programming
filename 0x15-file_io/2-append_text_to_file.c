#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd != -1 && text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content) * sizeof(char)) != -1)
			return 1;
	}

	close(fd);
	return (fd);
}