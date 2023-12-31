#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 *
 * @s: pointer to the block of memory to fill
 * @b: this is value to be set
 * @n: this is the number of bytes set to the value
 *
 * Return: char *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
