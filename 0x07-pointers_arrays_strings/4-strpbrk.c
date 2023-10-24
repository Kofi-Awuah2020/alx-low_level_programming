#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string to be searched
 * @accept: string containing characters to match
 *
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == '\0' || accept == '\0')
	{
		return (NULL);
	}
	int x;
	int y;
	int len = strlen(accept);

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < len; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return (NULL);
}
