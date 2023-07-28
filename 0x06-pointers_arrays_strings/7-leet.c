#include "main.h"

/**
 *leet - encode string into 1337
 *@str: string to be encoded
 *Return:returns coded string
 */

char *leet(char *str)
{
	int i, j;
	char leet_table[] = "4433771100";
	char char_table[] = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == char_table[j])
			{
				str[i] = leet_table[j];
				break;
			}
		}
	}
	return (str);
}
