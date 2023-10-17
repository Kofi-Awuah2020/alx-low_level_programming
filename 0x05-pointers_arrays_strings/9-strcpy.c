#include "main.h"

/**
 * _strcpy - Function copies a string.
 *
 * @dest: Destination pointer of function.
 * @src: Pointer for source of string.
 *
 * Return: Returns the pointer *dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int len;

	len = strlen(src);
	for (x = 0; x <= len; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
