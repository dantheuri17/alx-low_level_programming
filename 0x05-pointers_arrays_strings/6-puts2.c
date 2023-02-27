#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (; i < c; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
		_putchar('\n');
}
