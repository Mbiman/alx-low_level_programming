#include "main.h"
/**
 * _strcpy - a function that copies a string
 * @dest: function parameter (destination)
 * @src: function parameter (source)
 *
 * Return
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
