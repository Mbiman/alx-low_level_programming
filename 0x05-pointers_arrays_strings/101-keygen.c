#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
 * main - this prints a random password keys that must sum 2772
 *
 * return: 0
 */
int main(void)
{
	char pick;
	char z[]
		= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i, random_num, sum = 2772;

	srand(time(NULL));
	for (i = 0; sum > 200; i++)
	{
		random_num = rand() % (sizeof(z) -1);
		pick = z[random_null];
		putchar(pick);
		sum = sum - pick;
	}
	if (sum > 122)
	{
		putchar(sum / 2);
		putchar((sum / 2) + (sum % 2));
	}
	else
	{
		putchar(sum);
	}
	return (0);
}
