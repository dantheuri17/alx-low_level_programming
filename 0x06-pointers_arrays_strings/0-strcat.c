#include "main.h"

/**
 * _strcat: concatenates strings
 * @dest: destination string being appended to
 * @src: appending to dest
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int c, i;
	c = 0;

	while (dest[c])
		c++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[c] = src[i];
		c++;
	}
	dest[c] = '\0';

	return (dest);
}
