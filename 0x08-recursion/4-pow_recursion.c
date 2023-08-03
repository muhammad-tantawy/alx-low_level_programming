#include "main.h"
/**
 * _pow_recursion - function returns x to power of y
 * @x:base of the power
 * @y:the power for x to be raised by
 * Return: function returns the x to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
