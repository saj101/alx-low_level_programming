#include "main.h"

/**
 *_puts_recursion - a function that prints a string
 *@s: input value
 *
 *Return: Always 0.
 */
void _puts_recursion(char *s)
{
	for (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
