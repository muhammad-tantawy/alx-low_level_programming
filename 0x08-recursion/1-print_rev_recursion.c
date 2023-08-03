#include "main.h"

/**
 * _print_rev_recursion - function prints charcters in reverse order
 * @s: character of string to be pronted
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
