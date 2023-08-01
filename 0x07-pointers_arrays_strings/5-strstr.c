#include "main.h"


/**
 *_strstr - finds needle in haystack
 *@haystack: string to be checked
 *@needle: string to be checked with
 *Return: return pointer to needle
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;
	for (p1 = haystack; *p1 != '\0'; p1++)
	{
		p2 = p1;
		p3 = needle;
		while (*p3 != '\0' && *p2 == *p3)
		{
			p2++;
			p3++;
		}
		if (*p3 == '\0')
		{
			return(p1);
		}
	}
	return(NULL);
}
