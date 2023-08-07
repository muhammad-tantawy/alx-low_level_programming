#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates array of chars and initialize them
 * @size: size of the array to be created
 * @c: the character to initialize the array bytes with
 * Return:returns the address to the array character
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	array = malloc(size * sizeof(char));
	for (i = 0; i <= (int)size - 1; i++)
	{
		array [i] = c;
	}
	return(array);
}

