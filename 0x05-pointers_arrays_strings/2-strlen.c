#include "main.h"

/**
 * int _strlen - calculate the size of strings
 *
 * Return : returns lenght
 */

int _strlen(char *s)
{
	int count = 0 ;
	for ( char *i = s ; *i != '\0' ; i++ )
	{
		count++;
	}
	return (count);
}
