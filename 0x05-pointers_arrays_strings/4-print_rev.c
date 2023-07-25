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
	int i;`:wq

	i = len - 1;
	while (i >= 0) 
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
