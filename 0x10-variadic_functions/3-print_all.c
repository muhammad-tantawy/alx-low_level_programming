#include "variadic_functions.h"

/**
 * print_all - function prints all input based on format passed
 * @format: the type of data user wants to print
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	char c;
	int done = 0;

	va_start(args, format);
	while (format && format[i])
	{
		done = 0;
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				done = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				done = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				done = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				done = 1;
				break;
		}
		if (done && format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
