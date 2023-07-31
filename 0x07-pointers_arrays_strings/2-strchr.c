#include "main.h"
/**
 *_strchr - function to search a string
 *@s: string to search in
 *@c: charcter to search for
 *Return: returns the pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
