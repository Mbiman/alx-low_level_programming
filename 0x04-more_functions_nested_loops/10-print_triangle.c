#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: is a parameter in the function
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j, k, l;

	if (size > 0)
	{
		k = size - 1;
		for (i = 0; i < size; i++)
		{
			for (j = k; j > 0; j--)
			{
				_putchar(' ');
			}
			for (l = 0; l <= i; l++)
			{
				_putchar(35);
			}
			k--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
