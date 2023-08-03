#include "main.h"

/**
 * helper - function assists to find the square root
 *@i:counter used to add up to the root
 *@n:the number to find its root
 *Return: the next iteration
 */

int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}

	return (helper(n, i + 1));
}


/**
 * _sqrt_recursion - function retruns square root of a number
 * @n: number to calculate its route
 * Return: returns the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(n, 0));
}

