#include "main.h"
/**
* _strncat - function concatenates two strings
* @dest: destination output
* @src: the source string
*@n:number to use at most from src
* Return: returns dest
*/

char *_strncat(char *dest, char *src, int n)

{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')

	{
		dest_len++;
	}

	while (i < n && src[i] != '\0')

	{
		dest[dest_len + i] = src[i];
		i++;
	}

	dest[dest_len + i] = '\0';
	return (dest);
}
