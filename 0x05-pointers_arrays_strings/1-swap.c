#include "main.h"

/**
 * swap_int - swaps values of two integers using pointers
 * @a: point to address containing integer
 * @b: pointer to address containing integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
