#include "main.h"


/**
 * read_textfile - func readstext files and prints to the POSIX
 * @filename: the name of the file
 * @letters: letters numbers to be read
 * Return: returns actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char buf[letters];
	FILE *fp;
	size_t nread;
	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
       	nread = fread(buf, 1, letters, fp);
	fclose(fp);

	write(STDOUT_FILENO, buf, nread);

	return (nread);
}
