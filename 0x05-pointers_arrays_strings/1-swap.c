#include "main.h"
/**
 *swao_int - swap tp ints
 *@a  : first number to manipulate
 *@b  : second number to manipulate
 */

void swap_int(int *a, int *b)
{
	int *c = 0;
	*c = *a;
	*a = *b;
	*b = *c;
}

