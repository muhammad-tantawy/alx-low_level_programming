#include "main.h"
/**
 *_strchr - function to search a string
 *@s: string to search in
 *@c: charcter to search for
 *Return: returns the pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
