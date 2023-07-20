#include "main.h"

/**
 *more_numbers - function prints numbers from 0 to 14 followd by a new line
 *
 *
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0 ; a < 3 ; a++)

	{
		for (b = 0 ; b <= 14 ; b++)

		{
			_putchar(b + '0');
		}

		_putchar('\n');
	}
	_putchar('\n');
}
