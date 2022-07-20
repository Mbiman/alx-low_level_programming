#include "main.h"

/**
 * is_prime_number - The function return 1
 * when the variable is a prime number
 * @n: the number
 * @i: other number
 *
 * Return: integer
 */

int actual_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - a function that returns a real prime numbers
 * @n: the number
 * @i: the other number
 *
 * Return: iterator
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if ((n % i == 0) && (i > 0))
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
