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
	if (x % 2 != 0)
	{
		for (y = (x + 1) / 2; y < x; y++)
		{
			_putchar (*(str + y));
		}
	}
	else
	{
		for (y = (x / 2); y < x; y++)
		{
			_putchar (*(str + y));
		}
	}
	_putchar('\n');
}
