#include "main.h"

/**
 * get_endianness - func checks little or big endianness
 * Return: returns 1 if little and 0 if big
 */
int get_endianness(void)
{
	int x = 1;
	char *c;
 
	*c = (char*)&x;
	return ((int)*c);
}
