#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function executes other fumction of array
 * @size:size of the array
 * @action: pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

