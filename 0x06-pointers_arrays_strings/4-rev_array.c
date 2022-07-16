#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses and array
 * @a: the array
 * @n: number of elements in the array
 *
 * Return: void 0
 */
void reverse_array(int *a, int n)
{
	int i, end, j;

	end = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[end];
		a[end] = j;
		end--;
	}
}
