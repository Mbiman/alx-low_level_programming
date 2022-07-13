#include "main.h"
/**
 * _puts - a function that prints a string
 *@str: a parameter for the above function
 *
 * Return: always 0
 */
void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
