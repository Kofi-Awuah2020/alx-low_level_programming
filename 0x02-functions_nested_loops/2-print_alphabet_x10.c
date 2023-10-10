#include "main.h"

/**
 * print_alphabet_x10 - Prints a-z 10 times, in lowercase, followed by a '\n'.
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	y = 0;
	while (y < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
