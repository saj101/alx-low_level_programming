#include "main.h"
#include <stdio.h>

/**
 *main - prints all arguments it receives
 *@argc: number of arguments
 *@argv: vectors of arguments
 *
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("The arguments are:");
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("\n");
	return (0);
}
