#include "main.h"
int actual_prime_number(int n, int j);

/**
 *is_prime_number - returns 1 if integer is prime number
 *otherwise 0
 *@n: number
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (atual_prime_number(n, n - 1));
}

/**
 * actual_prime_number - checks if number is prime recursively
 *@n : number
 *@j : iterate
 *
 * Return: 1 if n is prime, else returns 0
 */
int actual_prime_number(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime_number(n, j - 1));
}
