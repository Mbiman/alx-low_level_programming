#include <stdio.h>
#include <stdlib.h>

/**
 * main - a main function that takes in arguments
 * @argc: argument count; contains the number of argument passed in the program
 * @argv: argument vector; one dimensional string array
 *
 * Return: integer
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
