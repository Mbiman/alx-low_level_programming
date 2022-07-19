#include "main.h"
#include <stddef.h>

/**
 * _strchr - function returns a pointer to the first occurrence
 * of the character c in the string s
 * @s: a function parameter which takes the string
 * @c: a function parameter which takes the character
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
