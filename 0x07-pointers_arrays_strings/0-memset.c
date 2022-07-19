#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte c
 * @s: a function parameter that holds the a memory area
 * @b: a function parameter that hold the constant character
 * @n: a function parameter that holds the n bytes of memory
 *
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
