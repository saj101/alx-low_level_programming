#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = sizeof(unsigned long int) * 8;
	int printed = 0;

	while (bit_count--)
	{
		if ((n & (mask << bit_count)) != 0)
		{
			putchar('1');
			printed = 1;
		}
		else if (printed)
			putchar('0');
	}
	if (!printed)
		putchar('0');

	putchar('\n');
}
