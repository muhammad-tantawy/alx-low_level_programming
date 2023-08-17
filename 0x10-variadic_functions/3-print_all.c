#include "variadic_functions.h"

/**
 * print_caar - prints character
 * @args: the input from user
 */

void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - prints integer
 * @args: input passed by user
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints float input from user
 * @args:input from user
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - helper finction to print strings
 * @args:input to the function
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");

	printf("%s", str);
}
/**
 * print_all - function prints input from user based on format passed
 * @format: character to specify which type of data to print
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int done = 0;

	va_start(args, format);
	while (format && format[i])
	{
		done = 0;
		switch (format[i])
		{
			case 'c':
				print_char(args);
				done = 1;
				break;
			case 'i':
				print_int(args);
				done = 1;
				break;
			case 'f':
				print_float(args);
				done = 1;
				break;
			case 's':
				print_string(args);
				done = 1;
				break;
		}
	if (done && format[i + 1])
		printf(", ");
	i++;
	}

	printf("\n");
	va_end(args);
}
