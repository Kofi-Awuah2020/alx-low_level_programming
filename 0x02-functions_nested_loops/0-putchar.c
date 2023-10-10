#include "main.h"

/**
 * main - Prints _putchar, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";
	int x;

	x = 0;
	while (string[x] != '\0')
	{
		_putchar(string[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
