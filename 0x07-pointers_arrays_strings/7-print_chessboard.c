#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int z;

	for (i = 0; i < 8; i++)
	{
		for (z = 0; z < 8; z++)
			_putchar(a[i][z]);
		_putchar('\n');
	}
}
