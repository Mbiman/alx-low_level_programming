#include "main.h"
/**
 * _isdigit - is a function that checks if a character is uppercase
 * @c: c is a parameter in the function
 *
 * Return: will return an integer
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
