#include "main.h"

/**
 *_strlen - calculate the size of strings
 *@s:string to calculate its length
 * Return: returns lenght
 */

int _strlen(char *s)
{
	int count = 0;

	char *i = s;

	while (*i != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
