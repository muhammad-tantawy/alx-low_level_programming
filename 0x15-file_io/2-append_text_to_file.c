#include "main.h"


/**
 * append_text_to_file - func appends text to the end of afile
 * @filename: name of the file that will be used
 * @text_content: content of the text to be appended
 * Return: returns 1 success or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		nwritten = write(fd, text_content, strlen(text_content));
		if (nwritten == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
