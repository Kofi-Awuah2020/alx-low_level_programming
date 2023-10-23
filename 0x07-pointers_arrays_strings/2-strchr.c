#include "main.h"
#include <string.h>

/**
 * _strchar - function locates a character in a string
 *
 * @s: pointer to string to be checked
 * @c: character to be checked
 *
 * Return: char *s if character is found, NULL if otherwise
 */
char *_strchar(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
