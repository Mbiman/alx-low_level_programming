#include "main.h"
/**
 * _isalpha - checks if a character is lowercase
 * @c: c is the varriable of the function
 *
 * Return: returns 1 if the character is lowercase and 0 if it's not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
