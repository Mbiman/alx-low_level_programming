#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of chars and intializes it with
 * a specific character.
 * @size: size of the array
 * @c: character to initialize the array
 *
 * Return: Null on error and pointer to the array on success
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (0);
	}
	while (i <= size + 1)
	{
		*(ptr + i) = c;
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
