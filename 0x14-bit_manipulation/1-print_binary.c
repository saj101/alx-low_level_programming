#include <main.h>

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
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}
