#include "main.h"
/**
 *_memcpy- copies memory area
 *@dest: memory where it is stored
 *@src: memory where it is copied
 *@n: number of bytes
 *
 *Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
