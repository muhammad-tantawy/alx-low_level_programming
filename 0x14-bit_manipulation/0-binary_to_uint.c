#include "main.h"



unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int result = 0;
	int y = 1;

	if (b == NULL)
		return (0);

	for (count = strlen(b) - 1; count >= 0; count--)
	{

		if (b[count] != '0' && b[count] != '1')
			return (0);

		result = result + (b[count] - '0') * y;
		y = 2 * y;


	}
	return (result);
}
