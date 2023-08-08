#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function fress 2d array
 * @grid: the array to be freed
 * @height:the height of the array
 */

void free_grid(int **grid, int height)
{

	int i, j;

	for (i = 0; i < height; i++)
	{
		free(arr);

		for (j = 0; j <= i; j++)
		{
			free(arr[j]);
		}
	}
	return (0);
}
