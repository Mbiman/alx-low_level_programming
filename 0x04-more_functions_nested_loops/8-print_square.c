#include "main.h"
/**
 * print_square - is a function that print square
 * @n: n is a functions parameter
 *
 * Return: void 0
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < (n - 1); j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
