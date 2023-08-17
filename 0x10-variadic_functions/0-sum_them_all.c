#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - func sums all numbers passed to it
 * @n: number of variables
 * Return: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{

	int x, i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}
	va_end(args);
	return (sum);
}
