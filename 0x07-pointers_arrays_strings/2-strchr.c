#include "main.h"
#include <stddef.h>

/**
 * _strchr - function locates a character in a string
 *
 * @s: pointer to string to be checked
 * @c: character to be checked
 *
 * Return: char *s if character is found, NULL if otherwise
 */
char *_strchr(char *s, char c)
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
