#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: Array of characters
 *
 * Return: The length of string
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s)
	{
		x += 1;
		s++;
	}
	return (x);
}
