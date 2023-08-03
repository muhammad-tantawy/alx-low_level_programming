#include "main.h"


/**
 * _sqrt_recursion - function retruns square root of a number
 * @n: number to calculate its route
 * Return: returns the square root
 */

int _sqrt_recursion(int n)
{
	for (int i = 1; i <= n / 2; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
	return (-1);
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion(n));
}
