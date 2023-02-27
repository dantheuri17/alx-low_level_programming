#include "main.h"

/**
 * print_rev - print string in revers
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
