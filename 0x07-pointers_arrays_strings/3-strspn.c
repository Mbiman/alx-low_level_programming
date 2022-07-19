#include "main.h"

/**
 * _strspn - function calculates the length (in bytes) of the initial
 * segment of s which consists entirely of bytes in accept.
 * @s: Original String
 * @accept: Caparism
 *
 * Return: The numbers of accept found in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c;

	a = 0;
	c = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			b++;
		}
		a++;
		if (accept[b] == '\0')
		{
			break;
		}
	}
	return (c);
}
