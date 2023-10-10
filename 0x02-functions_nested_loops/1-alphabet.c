#include "main.h"

/**
 * print_alphabet - Prints alphabets a-z in lower case.
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
