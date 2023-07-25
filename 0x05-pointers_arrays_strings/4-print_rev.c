#include "main.h"

/**
 * print_rev - print in reverse
 *
 * @s: character used to prent in reverse
 */

void print_rev(char *s)
{
	int len = 0;
	while (*(s + len) != '\0')

	{
		len++;
	}

	int i= len - 1;
	
	for (; i >= 0; i--)
	{
	
		_putchar(s[i]);
	}
	
	_putchar('\n');
}
