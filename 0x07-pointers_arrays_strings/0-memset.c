#include "main.h"
/**
 *_memset- fills a memory with a constant byte
 *@s:first address of memory to be filled
 *@b: value
 *@n: number of bytes to be changed
 *
 *Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
