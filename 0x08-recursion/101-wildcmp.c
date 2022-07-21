#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings and returns 1 if
 * they are considered identical
 * @s1: the string
 * @s2: the second string
 *
 * Return: 1 if considered identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
