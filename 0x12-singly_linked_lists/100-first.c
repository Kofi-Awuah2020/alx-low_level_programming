#include "lists.h"

/**
 * print_before_main - function prints a string literal before main is executed
 *
 * Return: Void
 */
void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
