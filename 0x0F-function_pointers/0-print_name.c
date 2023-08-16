#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function prints name
 * @name: name to be printed
 * @(*f)(char *):pointer to a function f
 */

void print_name(char *name, void (*f)(char *))
{
	while (f == NULL);
	f(name);
}
