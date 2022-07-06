#include "main.h"
/**
 * print_last_digit - a function that prints last digit
 * @x: x is the function parameter
 *
 * Return: int
 */
int print_last_digit(int x)
{
	int lastno = x % 10;

	if (lastno < 0)
	{
		lastno = lastno * -1;
	}
	_putchar(lastno + '0');
	return (lastno);
}
