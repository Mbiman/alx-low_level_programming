#include "main.h"

/**
 * _pow_recursion - a function returns x raise to the power of y
 * @x: the base integer
 * @y: the power
 *
 * Return: -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
