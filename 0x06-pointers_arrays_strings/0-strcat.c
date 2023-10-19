#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: string to be appended
 * @src: string to be concatenated
 *
 * Return: string in pointer dest
 */
char *_strcat(char *dest, char *src)
{
	while (*src)
	{
		src++;
	}
	while (*dest <= '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	return (dest);
}
