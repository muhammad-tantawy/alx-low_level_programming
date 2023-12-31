#include "main.h"

/**
 * factorial - functions returns factorial of n
 * @n:number to calculate the factorial for
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
