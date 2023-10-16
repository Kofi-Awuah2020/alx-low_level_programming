#include "main.h"

/**
 * puts2 - print every other character in string
 *
 * @str: String to be printed
 * Return: Void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
}
