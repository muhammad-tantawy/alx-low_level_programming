#include "variadic_functions.h"

/**
 * print-strings - function prints strings
 * @separator: seperates between printed characters
 * @n: number of elemnts
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", str);
		if (str == NULL)
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}

