#include "main.h"

/**
 * _strncpy - copy the string
 * @dest: string
 * @src: string
 * @n: number of times being copies
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
