#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: String to be printed in reverse
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int x;
	int y;

	x = _strlen(s);
	for (y = x; y >= 0; y--)
	{
		_putchar(*(s + y));
	}
	putchar('\n');
}

