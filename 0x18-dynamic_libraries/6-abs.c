#include "main.h"

/**
 * _abs - This is to print absolute value
 * @a: the number to return the absolute of .
 * Return:0
*/

int _abs(int a)
{
if (a > 0)
{
return (a);
}
else if (a == 0)
{
return (0);
}
else
{
return (a * -1);
}
}
