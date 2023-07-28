#include "main.h"

/**
 *string_toupper - converts lower case to upper
 *@str: string to convert
 *@Return: returns converted string
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
