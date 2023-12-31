#include "main.h"

/**
 *_strncpy - function copies string from 3 parameters
 *@dest: the destinationtext
 *@src: the source text
 *@n: the number of character
 *Return: returns destination
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
