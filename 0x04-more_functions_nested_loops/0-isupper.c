#include "main.h"

/**
 * _isupper - Checks for uppercase character
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
