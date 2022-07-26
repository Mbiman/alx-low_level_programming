#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: the string
 *
 * Return: Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
	}
	i++;
	ptr = (char *) malloc(sizeof(char) * i);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = str[i];
	}
	*(ptr + i) = '\0';
	return (ptr);
}
