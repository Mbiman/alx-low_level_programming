#include<stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int first;
	long int second;
	long int sum;
	int i;

	first = 0;
	second = 1;
	sum = 0;
	while (i < 49)
	{
		sum = first + second;
		printf("%li, ", sum);
		first = second;
		second = sum;
		i++;
	}
	sum = first + second;
	printf("%li\n", sum);
	return (0);
}
