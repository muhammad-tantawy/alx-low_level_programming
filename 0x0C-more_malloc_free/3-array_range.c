#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates a memory having numbers from min till max
 * @min: the minimum number to be used
 * @max: the maximum number to be used
 * Return: returns the array created
 */

int *array_range(int min, int max)
{
	int *arr;
	int elenum = min;
	int x;

	if (min > max)
	{
		return (NULL);
	}
	while (elenum <= max)
	{
		elenum++;
	}
	arr = malloc(elenum * sizeof(min));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < elenum; x++)
	{
		arr[x] = min + x;
	}
	return (arr);
}
