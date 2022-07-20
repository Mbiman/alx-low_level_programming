#include "main.h"

/**
 * _puts_recursion - a function that prints strings
 * @s: a function parameter which is the string
 *
 * Return: void 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
