#include "main.h"

/**
 *flip_bits - func shows how many bits needed to flip to switch to the other number
 *@n: the first number to be switched
 *@m: the number to be switched to
 *Return: returns the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
	xor >>= 1;
	}
	return (count);
}
