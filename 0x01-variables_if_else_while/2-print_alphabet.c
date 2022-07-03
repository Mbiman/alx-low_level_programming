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
	int i = 0;

	while (i < 26)
	{
		putchar(a);
		a++;
		i++;
	}
	putchar('\n');
	return (0);
}
