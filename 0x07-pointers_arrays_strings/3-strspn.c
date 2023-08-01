#include "main.h"
/**
 *_strspn - search a string for a set of bytes
 *@s: segment to be checked
 *@accept : bytes to be checked in s
 *Return: returns number of bytes
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	while (*s != '\0')
	{
		char *p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}
	return(count);
}
