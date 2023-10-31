#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char*, NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	int x;
	int y;
	int size, size1, size2;
	char *str;

	x = 0;
	y = 0;
	size1 = (s1 != NULL) ? strlen(s1) : 0;
	size2 = (s2 != NULL) ? strlen(s2) : 0;
	size = size1 + size2 + 1;

	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (x < size1)
	{
		str[x] = s1[x];
		x++;
	}
	while (y < size2)
	{
		str[x] = s2[y];
		x++;
		y++;
	}
	str[x] = '\0';
	return (str);
}
