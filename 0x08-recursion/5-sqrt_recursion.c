#include "main.h"

/**
 * _sqrt_recursion - a functions that returns the natural square
 * of a value
 * @n: the number
 * @i: other numbers
 * Return: Resulting sqrt
 */

int real_root_recursion(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_root_recursion(n, 0));
}

/**
 * real_root_recursion - a function that returns the natural
 * root of a number
 * @n: the number
 * @i: the iterator
 *
 * Return: sqrt
 */
int real_root_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (real_root_recursion(n, i + 1));
}
