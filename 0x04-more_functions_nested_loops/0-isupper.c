#include "main.h"
/**
 * _isupper - is a function that checks if a character is uppercase
 * @c: c is a parameter in the function
 *
 * Return: will return an integer
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
