#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function locates the first occurrence
 * in the string s of any of the bytes in the string accept.
 * @accept: String to compare to
 * @s: main string
 *
 * Return: string occurence, oherwise null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
