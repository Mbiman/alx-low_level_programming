#include "main.h"
#include <string.h>

/**
 * _strcat - a finction that concatinates two strings
 * @dest: parameter for the function
 * @src: another parameter for the function
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int lendest, i, lensrc;

	lendest = strlen(dest);
	lensrc = strlen(src);
	for (i = 0; i < lensrc; i++)
	{
		dest[lendest + i] = src[i];
	}
	dest[lendest + i] = '\0';

	return (dest);
}
