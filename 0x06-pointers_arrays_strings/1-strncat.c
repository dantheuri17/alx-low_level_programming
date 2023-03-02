#include "main.h"

/**
 * _strncat - concatenate 2 strings with certain number of
 * @src: string concatenating
 * @dest: string being concatenated
 * @n: number of values
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (i < n && src[i])
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen + n + 1] = '\0';

	return (dest);
}
