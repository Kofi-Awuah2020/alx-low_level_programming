#include "main.h"

/**
 * print_most_numbers - Prints the numbers, 0 to 9, followed by (\n).
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9 ; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar('0' + x);
		}
	}
	_putchar('\n');
}
