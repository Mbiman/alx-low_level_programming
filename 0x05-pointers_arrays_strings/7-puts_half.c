#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: the function parameter
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int length, x, y;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	length = x;
	for (y = ((length - 1) / 2) + 1; y < length; y++)
	{
		_putchar(*(str + y));
	}
	_putchar('\n');
}
