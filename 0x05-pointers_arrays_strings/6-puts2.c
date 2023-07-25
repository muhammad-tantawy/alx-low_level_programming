#include "main.h"

void puts2(char *str)
{
	int len = 0;
	int i;

	while (*(str + len) != '\0')
	{
		len++;
	}
	
	for (i = 0; i < len; i += 2)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
