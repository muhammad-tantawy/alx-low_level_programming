#include "main.h"



unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	unsigned int result = 0;

	if (b != 0 && b != 1 )
		return (0);

	if (b == NULL)
		return (0);

	for (count = 0; count < strlen(b); count++)
	{
		result = b[count] * (2 ^ count);
	}
	return (result);
}
