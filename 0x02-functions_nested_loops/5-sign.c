#include "main.h"
/**
 * print_sign - shows if an input is positive or negative
 * @n: n is a parameter of the function
 *
 * Return: return 1 for +ve num, -1 for -ve num and 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
