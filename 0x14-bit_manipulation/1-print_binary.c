#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = sizeof(unsigned long int) * 8;

	while (bit_count--)
	{
		if ((n & (mask << bit_count)) != 0)
			break;
	}

	while (bit_count >= 0)
	{
		putchar((n & (mask << bit_count)) ? '1' : '0');
		bit_count--;
	}
	putchar('\n');
}
