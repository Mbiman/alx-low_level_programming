#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: the function parameter
 *
 * Return : 0
 */
void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
