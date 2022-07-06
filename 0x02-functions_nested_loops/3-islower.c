#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: c is the varriable of the function
 *
 * Return: returns 1 if the character is lowercase and 0 if it's not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
