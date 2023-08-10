#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: the size requested of memory
 */

void *malloc_checked(unsigned int b)

{
	unsigned int *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}
	exit(array);
}
