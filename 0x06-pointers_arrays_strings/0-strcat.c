#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: string to be appended.
 * @src: string to be concatenated
 *
 * Return: char *dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	int x;

	for (x = 0; x <= src_len; x++)
	{
		*(dest + (dest_len + x)) = *(src + x);
	}
	return (dest);
}
