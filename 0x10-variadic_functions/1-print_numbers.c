#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;
	unsigned int num;
	char *sep;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, usigned int);
		printf("%u", num);
		sep = va_arg(args, char);
		printf("%s", sep);
	}
	if (sep)
	{
		printf("\n");
	}
}

