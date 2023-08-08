#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char *dup;
	int count = 0;
	int i;

	while (str[count] != '\0')
	{
		count++;
	}

	dup = malloc((count + 1) * sizeof(char));
	for (i = 0; i < count; i++)
	{
		dup[i] = str[i];
	}

	if (dup == NULL || str == NULL)
	{
		return (NULL);
	}

	return (dup);
	free(dup);
}
