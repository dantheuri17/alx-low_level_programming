#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @n: number of bytes to fill
 * @s: pointer to memory area
 * @b: constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0; 

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
