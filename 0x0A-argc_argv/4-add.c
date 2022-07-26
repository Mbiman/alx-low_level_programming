#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a main function that takes argument
 * @argc: argument count; contains the number of argument passed in the program
 * @argv: argument vector; one dimensional string array
 *
 * Return: integer
 */
int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				return (puts("Error"), 1);
			}
		}
		sum += atoi(argv[i]);
	}
	return (printf("%d\n", sum), 0);
}
