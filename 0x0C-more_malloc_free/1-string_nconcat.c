#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates first string with n charcters second string
 *@s1: first string
 *@s2: second string
 *Return: returns pointer to the newely created array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *arrays;
	unsigned int count1 = 0, count2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (count1 != '\n')
	{
		count1++;
	}
	while (count2 != '\n')
	{
		count2++;
	}

	if (n >= count2)
	{
		n = count2;
	}

	arrays = malloc(count1 * sizeof(s1) + n * sizeof(s2) + 1);
	if (arrays == NULL)
	{
		return (NULL);
	}
	return (arrays);
}
