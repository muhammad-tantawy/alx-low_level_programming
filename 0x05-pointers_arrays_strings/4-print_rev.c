#include "main.h"

/**
 * print_rev - print in reverse
 *
 * @s: character used to prent in reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int i = len - 1;
	while (*(s + len) != '\0')
	{
		len++;
	}

	while (i >= 0) 
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
