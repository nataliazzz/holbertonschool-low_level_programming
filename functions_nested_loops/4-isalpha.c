#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: character to check
 * Return: 1 if lower or uppercase and 0 if not alphabet character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
