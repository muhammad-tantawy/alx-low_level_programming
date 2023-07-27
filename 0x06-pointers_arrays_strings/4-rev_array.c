#include "main.h"

/**
 *reverse_array - function reverses content of array
 *@a: array to be reversed
 *n: number of elements
 *
 */

void reverse_array(int *a, int n)

{
	int i = 0;
	int b[n];

	while (i < n)
	{
		b[i] = a[n - i - 1];
		i++;
	}
	for (i = 0 ; i < n; i++)
	{
		a[i] = b[i];
	}
	return (0);
}
