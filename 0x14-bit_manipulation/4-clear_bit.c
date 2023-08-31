#include "main.h"


/**
 * clear_bit - func clears a bit at a given index
 * @n: the number to operate on
 * @index: The index which we want to change the bit at
 * Return: 1 if success , -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
