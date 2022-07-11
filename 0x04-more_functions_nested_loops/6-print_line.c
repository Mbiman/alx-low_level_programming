#include "main.h"
/**
 * print_line - a function that prints lines
 * @n: n is a parameter of the function
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
