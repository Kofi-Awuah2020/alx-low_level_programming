#include "main.h"

/**
 * _isupper - Checks if character is an uppecase letter.
 * @c: The character to check (assumed to ba an ASCII value)
 *
 * Return: 1 (If uppercase), 0 (If otherwise)
 */
int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
