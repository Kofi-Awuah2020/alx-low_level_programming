#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @x: parameter used to determine distance from 0.
 *
 * Return: an integer value
 */
int _abs(int x)
{
	int x;

	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
