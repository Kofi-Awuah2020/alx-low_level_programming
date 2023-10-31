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
	int size;
	char *str;

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}
	x = 0;
	y = 0;
	size = strlen(s1) + strlen(s2) + 2;
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (x < (int)strlen(s1))
	{
		str[x] = s1[x];
		x++;
	}
	while (y < (int)strlen(s2))
	{
		str[x] = s2[y];
		x++;
		y++;
	}
	str[x] = '\0';
	return (str);
}
