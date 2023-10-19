#include "main.h"
/**
 *
 *_strpbrk - locates a string in another
 *@s: string to be checked
 *@accept: the accepted data to be searched for
 *Return: returns pointer to the byte found in s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return(s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
