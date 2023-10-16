#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: String to be checked for length
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int x;
	int y;

	x = strlen(s);
	for (y = x; y >= 0; y--)
	{
		_putchar(*(s + y));
	}
	_putchar('\n');
}
