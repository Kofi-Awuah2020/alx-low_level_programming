#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @x: function uses last digit of this variable.
 *
 * Return: last digit of x
 */
int print_last_digit(int x)
{
	x = x % 100;
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
