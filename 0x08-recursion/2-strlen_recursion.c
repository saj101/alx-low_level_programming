#include "main.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *@s: string
 *
 *Return: length of a string measured
 */
int _strlen_recursion(char *s)
{
	int stringi = 0;

	if (*s)
	{
		stringi++;
		stringi += _strlen_recursion(s + 1);
	}
	return (stringi);
}
