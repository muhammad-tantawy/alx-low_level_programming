#include"main.h"
/**
 * main - checks if letter is upper case
 * Return : 0
*/

int _isupper(int c)
{
	int c;
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if ( c >= 'a' &&  c <= 'z')
	{
		return (0);
	}
	return (0);
}
