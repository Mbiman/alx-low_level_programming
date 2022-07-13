#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: the function parameter
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	int length, x, y, i;

	y = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	length = y;
	for (x = 0; x < length / 2; x++)
	{
		i = *(s + x);
		*(s + x) = *(s + length - x - 1);
		*(s + length - x - 1) = i;
	}
}
