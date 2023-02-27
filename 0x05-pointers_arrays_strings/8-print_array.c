#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: the string
 * @n: how many elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");

		i++;
	}
	printf("\n");
}
