#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  Write a function that returns a
 * pointer to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a newly allocated space in memory which contains the contents of s1
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, fr;
	int **s;

	fr = 0;
	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	s = malloc(height * sizeof(int *));
	if (s == 0)
	{
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		*(s + i) = malloc(width * sizeof(int));
		if (*(s + i) == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(s + k));
		}
		free(s);
	}
	return (s);
}
