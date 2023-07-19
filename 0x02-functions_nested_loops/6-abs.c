#include "main.h"

/**
 * _abs - This is to print absolute value
 * Return:0
*/

int _abs(int a)
{
if (a > 0)
{
_putchar(a);
}
else if (a == 0)
{
_putchar('0');
}
else
{
a = a * -1;
_putchar(a);
}
}
