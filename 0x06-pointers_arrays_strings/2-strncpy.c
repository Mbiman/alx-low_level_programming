#include "main.h"
#include <string.h>
/**
 * _strncpy - a function that coppies a string
 * @dest: a function parameter(destination)
 * @src: a function parameter(source)
 * @n: a funtions parameter the dectects the number of char to copy
 *
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
