#include "main.h"

/**
 * _print_rev_recursion - function prints a string in reverse
 * @s: pinter to string to be printed
 *
 * Return: Void
 */
void _print_rev_recursion(char *s);
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
