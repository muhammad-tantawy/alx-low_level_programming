#include "main.h"

/**
 * is_prime_helper - function assists to find the prime num
 * @n: number to check for prime
 * @i: number to divide by n
 * Return: returns the prime
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - function states number is prime or not
 * @n: number to check for prime
 *Return: the next iteration
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
