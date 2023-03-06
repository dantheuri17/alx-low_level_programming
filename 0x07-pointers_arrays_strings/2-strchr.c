#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: first occurrence of character c or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0, x;

	while (s[i])
		i++;

	for( x = 0; x <= i; x++)
	{
		if (s[x] == c)
		{
			s += x;
			return (s);
		}
	}

	return ('\0');
}
