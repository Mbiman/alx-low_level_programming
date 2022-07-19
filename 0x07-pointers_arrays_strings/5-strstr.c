#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack
 * @haystack: the string  to search
 * @needle: character to find
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		i = 0;
		if (*needle == '\0')
		{
			return (haystack);
		}
		while ((*haystack == *needle) && (*haystack != '\0' && *needle != '\0'))
		{
			haystack++, needle++, i++;
			if (*needle == '\0')
			{
				return (haystack - i);
			}
		}
		haystack -= (i - 1), needle -= i;
	}
	return (NULL);
}
