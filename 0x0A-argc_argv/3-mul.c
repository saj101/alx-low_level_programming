#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: array of arguments
 *
 *
 *Return: always 0
 */
int main(int argc, char *argc[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
