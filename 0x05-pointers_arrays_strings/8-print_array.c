#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints all elements of an array
 * @a: the function parameter
 * @n: the second parameter of the function
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	putchar(10);
}
