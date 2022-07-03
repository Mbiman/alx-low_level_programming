#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';
	int i = 1;

	while (i <= 52)
	{
		if (i <= 26)
		{
			putchar(a);
			a++;
		}
		else
		{
			putchar(b);
			b++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
