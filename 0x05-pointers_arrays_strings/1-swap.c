#include "main.h"

/**
  *swap_int- swaps values of two integers
  *@a: integer to be swaped
  *@b: integer to be swaped
  */

void swap_int(int *a, int *b);
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
