#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets a to z ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}
}
