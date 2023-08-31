#include "main.h"


void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n == 1)
	{
		putchar('1');
		return;
	}

	print_binary(n >> 1);
	putchar((n & 1) + '0');
}
