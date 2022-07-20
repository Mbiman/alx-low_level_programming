#include "main.h"

/**
 * factorial - a function that calculates factorial of a number
 * @n: the number
 *
 * Return: the factorial and returns -1 is n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
