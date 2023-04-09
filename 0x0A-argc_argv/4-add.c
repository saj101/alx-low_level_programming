#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - adds positive numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		print("0\n");
		return (0);
	}
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
