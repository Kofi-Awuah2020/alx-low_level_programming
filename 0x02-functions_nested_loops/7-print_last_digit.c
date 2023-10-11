#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @x: function uses last digit of this variable.
 *
 * Return: last digit of x
 */
int print_last_digit(int x)
{
	x = x % 10;
	return (abs(x));
}
