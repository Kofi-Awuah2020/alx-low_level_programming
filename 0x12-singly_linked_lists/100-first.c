#include "lists.h"

/**
 * print_before_main - function prints a string literal before main is executed
 *
 * Return: Void
 */
void print_before_main(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
