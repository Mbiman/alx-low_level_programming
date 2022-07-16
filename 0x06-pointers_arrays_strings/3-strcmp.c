#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings
 * @s1: a functions variable that takes the first string
 * @s2: the second functions variable that takes a string
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
	;
		if (*s1 == *s2)
		{
			return (0);
		}
	return (*s1 - *s2);
}
