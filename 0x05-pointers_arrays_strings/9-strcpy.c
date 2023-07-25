#include "main.h"

/**
 * _strcpy - function copies from src to dest pointers values
 * @src:source pointer
 * @dest:destination pointer
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')

	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
