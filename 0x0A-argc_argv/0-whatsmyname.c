#include <stdio.h>
#include <stdlib.h>

/**
 * main - a main function that takes argument
 * @argc: argument count; contains the number of argument passed in the program
 * @argv: argument vector; one dimensional string array
 *
 * Return: integer
 */
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
