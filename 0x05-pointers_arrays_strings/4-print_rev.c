#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s : a parameter for the print_rev function
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int len, x, y;

	y = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	len = y;
	for (x = len - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
