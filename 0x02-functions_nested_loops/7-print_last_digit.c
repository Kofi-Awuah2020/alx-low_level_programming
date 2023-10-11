#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @x: function uses last digit of this variable.
 *
 * Return: 0 (Success)
 */
int print_last_digit(int x)
{
	_putchar('0' + abs(x % 10));
	return (0);
}
