#include "main.h"

/**
 * _strncpy - function copies a string.
 *
 * @dest: Destination pointer store execution results.
 * @src: Source pointer to be copied.
 * @n: n bytes to be copied.
 *
 * Return: char *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
