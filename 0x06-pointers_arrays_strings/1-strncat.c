#include "main.h"
#include <string.h>

/**
 * _strncat - Concantenates string til n byte of src.
 *
 * @dest: String to be appended.
 * @src: String to be concatenated.
 * @n: n bytes.
 *
 * Return: char *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int x;

	dest_len = strlen(dest);
	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		*(dest + dest_len + x) = *(src + x);
	}
	*(dest + dest_len + x) = '\0';
	return (dest);
}
