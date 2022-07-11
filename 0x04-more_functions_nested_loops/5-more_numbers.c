#include "main.h"
/**
 * more_numbers - is a function that print numbers
 *
 * Return: void 0
 */
void more_numbers(void)
{
	int i, j;

	i = 1;
	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
