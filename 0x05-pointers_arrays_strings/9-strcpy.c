#include "main.h"

/**
 * _strcpy - copy pointer value in src to dest
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: value of the dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, c;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	c++;
	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
