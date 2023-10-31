#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a copy of string in a allocated memory
 * @str: string to be duplicated
 *
 * Return: char*, NULL if memory could not be allocated
 */
char *_strdup(char *str)
{
	int x = 0;
	char *s;
	int size = strlen(str);

	s = malloc((size + 1) * sizeof(*str));
	if (s == NULL)
	{
		return (NULL);
	}
	while (x < size)
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';
	return (s);
}
