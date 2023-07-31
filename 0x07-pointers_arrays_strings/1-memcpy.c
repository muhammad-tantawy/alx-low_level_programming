#include "main.h"


/**
 *_memcpy - function copies memory data
 *@dest: destination memory
 *@src: source memory
 *@n : number of bytes to copy
 *Return: returns modified memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *p_dest;
	unsigned char *p_src;
	unsigned int i;

	p_dest = (unsigned char *) dest;
	p_src = (unsigned char *) src;
	for (i = 0; i < n; i++)
	{
		*p_dest++ = *p_src++;
	}

	return (dest);
}
