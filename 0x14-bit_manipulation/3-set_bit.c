#include "main.h"


/**
 * set_bit - fucn sets a bit to 1 at agiven index
 * @n: the data to be modified
 * @index: the bit position to modify
 * Return: returns 1 if success or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n = *n | (1<<index);
	return (1);
}
