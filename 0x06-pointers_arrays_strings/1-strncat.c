#include "main.h"
#include <string.h>

/**
 * _strncat - a finction that concatinates two strings
 * @dest: parameter for the function
 * @src: another parameter for the function
 * @n: this takes the number of character that will be joined
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, lendest;

	lendest = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lendest + i] = src[i];
	}
	dest[lendest + i] = '\0';

	return (dest);
}
