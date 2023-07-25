#include "main.h"
/**
 * puts_half - prints only half of sentence
 * @str: string to print its half
 */

void puts_half(char *str)
{
	int len = 0;
	int start;
	int i;
	
	while (*(str + len) != '\0')
	{
		len++;
	}
	
	int start = len % 2 == 0 ? len / 2 : (len / 2) + 1;
	
	for (i = start; i < len; i++)
	{
		_putchar(*(str + i));
	}
	
	_putchar('\n');
}
