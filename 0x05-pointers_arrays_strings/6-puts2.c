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
		if (*(str + 1) != '\0')
		{
			str += 2;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
