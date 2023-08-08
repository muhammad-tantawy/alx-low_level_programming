#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - funxtion allocates a 2 dimensional array
 * @width: width of the required array
 * @height: height of the needed array
 * Return: returns NULL if failure and 0 if success
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, x, y, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0 ; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
			{
				free(array[j]);
			}
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}
