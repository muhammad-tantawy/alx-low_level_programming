#include "main.h"

/**
 * int _strlen - calculate the size of strings
 *
 * Return : returns lenght
 */

int _strlen(char *s)
{
	int count = 1 ;
	for ( char *i = &s ; *i != '\n' ; i++ )
	{
		count++;
	}
	return (count);
}
