#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 'z';
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
