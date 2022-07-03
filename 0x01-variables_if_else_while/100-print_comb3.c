#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 1;
	while (i < 99)
	{
		j = i;
		while (j <= 99)
		{
			if (j / 10 % 10 > j % 10)
			{
				break;
			}
			j /= 10;
			if (j == 0)
			{
				if ((i % 11) != 0 && i != 11)
				{
					putchar((i / 10) + '0');
					putchar((i % 10) + '0');
					if (i < 89)
					{
						putchar(',');
						putchar(' ');
					}
				}
				break;
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
