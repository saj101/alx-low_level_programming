#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *q = haystack;
		char *p = needle;

		while (*q == *p && *p != '\0')
		{
			q++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
