#include "main.h"

/**
 *reverse_array - function reverses content of array
 *@a: array to be reversed
 *@n: number of elements
 *
 */

void reverse_array(int *a, int n)

{
	int i = 0;
	int b = 0;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;

	}
}
