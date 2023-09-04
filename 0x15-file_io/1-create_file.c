#include "main.h"

/**
 * create_file - func creates a file 
 * @filename: file name to be created
 * @text_content:string to be entered
 * Return:1 success or -1
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwritten;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
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
