#include "main.h"

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
	while (*dest)
	{
		dest++;
	}
	while (*src <= '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
