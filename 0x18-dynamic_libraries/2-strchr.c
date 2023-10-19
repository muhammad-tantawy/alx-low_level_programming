#include "main.h"

/**
 * *_strchr - function to search a string
 *@s: string to search in
 *@c: charcter to search for
 *Return: returns the pointer
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
