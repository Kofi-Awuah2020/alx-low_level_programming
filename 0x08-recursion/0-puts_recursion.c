#include "main.h"
/**
 * _puts_recursion - function prints a string followed by '\n'
 * @s: pointer to string to be printed
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
