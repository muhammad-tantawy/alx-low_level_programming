#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_indes - function returns the index of the found number in the array
 * @array: array to be checked
 * @size: size of the array
 * @cmp: function used to compare
 * Return: returns -1 if no element found and if size<=0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i, j = 0;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
			j++;
		}
	}
	if (j == 0)
	{
		return (-1);
	}
	return (EXIT_SUCCESS);
}
