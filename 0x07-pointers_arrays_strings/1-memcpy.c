#include "main.h"

/**
 * _memcpy - function copies memory area
 *
 * @dest: pointer to destination of memory location
 * @src: pointer to memory location of source of data
 * @n: number of bytes to be copied
 *
 * Return: char *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return(dest);
}
