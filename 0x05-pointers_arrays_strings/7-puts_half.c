#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: String to be printed
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int x;
	int y;

	x = strlen(str);
	for (y = (x / 2); y < x; y++)
	{
		_putchar (*(str + y));
	}
	_putchar('\n');
}
