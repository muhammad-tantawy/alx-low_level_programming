#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: the size requested of memory
 * Return: returns pointer to array.
 */

void *malloc_checked(unsigned int b)

{
	void *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
