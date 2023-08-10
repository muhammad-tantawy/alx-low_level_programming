#include "main.h"
#include <stdlib.h>
/**
 * _calloc - defines a memory location with size nmemb * size
 * @nmemb: number of members
 * @size: size of each elemnet
 * Return: returns the pointer to the new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *array;

	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	if (nmemb || size == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb * size; i++)
	{
		array[i] = 0;
	}
	return (array);
}
