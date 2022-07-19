#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memcpy - function copies n bytes from memory area src to
 * memory area dest.  The memory areas must not overlap
 * @dest: a function parameter that holds the destination string
 * @src: a function parameter that hold the source string
 * @n: a function parameter that holds the n bytes of memory
 *
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
