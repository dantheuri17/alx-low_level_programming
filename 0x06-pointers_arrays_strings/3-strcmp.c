#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return an integer
 */

int _strcmp(char *s1, char *s2)
{
	int s1len = 0, s2len = 0, s, c = 0, r = 0;

	while (s1[s1len])
		s1len++;

	while (s2[s2len])
		s2len++;

	if (s1len <= s2len)
		s = s1len;
	else
		s = s2len;

	while (c <= s)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}
		c++;
	}

	return (r);
}
