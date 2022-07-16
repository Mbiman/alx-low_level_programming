#include "main.h"
/**
 * string_toupper - a function that changes the character to uppercase
 * @s: a parameter of the function
 *
 * Return: returns a characters
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
