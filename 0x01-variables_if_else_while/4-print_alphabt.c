#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int i = 1;

	while (i <= 26)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
		i++;
	}
	putchar('\n');
	return (0);
}
