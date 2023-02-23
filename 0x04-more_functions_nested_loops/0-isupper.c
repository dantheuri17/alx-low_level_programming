#include "main.h"

/**
 * _isupper - checks whether a letter is uppercase
 * @c: input number.
 * Return: 1 if it is uppercase, 0 in other case.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
