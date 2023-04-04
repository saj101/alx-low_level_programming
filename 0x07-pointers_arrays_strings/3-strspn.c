#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				a++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}

