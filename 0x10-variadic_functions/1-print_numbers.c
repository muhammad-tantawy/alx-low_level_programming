#include "variadic_functions.h"

/**
 * print_numbers - function prints numbers passed to it
 * @separator: used to sepearate between nums
 * @n: number of elements
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list args;
	int num;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}

