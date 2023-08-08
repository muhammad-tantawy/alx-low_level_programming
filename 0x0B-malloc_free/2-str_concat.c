#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: returns the concatenated strings s1+s2
 */

char *str_concat(char *s1, char *s2)
{
	char *strcon;
	int count1 = 0;
	int count2 = 0;
	int i;
	int x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}

	strcon = malloc((count1 + count2 + 1) * sizeof(char));
	if (strcon == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count1; i++)
	{
		strcon[i] = s1[i];
	}
	for (x = 0; x < count2 + 1; x++)
	{
		strcon[x + count1] = s2[x];
	}
	return (strcon);
}
