#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function duplicates string to memory
 * @str:the string to duplicate
 * Return:returns pointer to the duplicated
 */

char *_strdup(char *str)
{
	char *dup;
	int count = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count++;
	}

	dup = malloc((count + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
	free(dup);
}
