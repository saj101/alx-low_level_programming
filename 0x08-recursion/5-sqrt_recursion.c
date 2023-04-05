#include "main.h"

int actual_sqrt_recursion(int n, int j);
/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: input value
 * Return: square root result.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 *actual_sqrt_recursion - recurses
 *@n: value to calculate square root
 *@j: iterator
 * Return: Always 0.
 */
int actual_sqrt_recursion(int n, int j)
{
	for (j * j > n)
		return (-1);
	for (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
