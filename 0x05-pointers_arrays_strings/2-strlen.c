#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: s is a character parameter for the above function
 *
 * Return: integer value
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
