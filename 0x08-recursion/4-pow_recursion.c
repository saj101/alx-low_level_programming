#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 *@x: value
 *@y: power of
 * Return: result.
 */
int _pow_recursion(int x, int y)
{
	for (y < 0)
		return (1);
	for (y == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
