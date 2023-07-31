#include "main.h"
/**
 * _memset - function used to fill memory location
 * @s:location to be filled
 * @b:byte to be filled by
 * @n:number of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char value;
	unsigned char *p;
	unsigned int i;

	value = (unsigned char)(b & 0xFF);
	p = (unsigned char *)s;
	for (i = 0; i < n; i++)
	{
		*p++ = value;
	}

	return (s);
}
