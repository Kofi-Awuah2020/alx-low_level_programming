#include "main.h"

/**
 * _strcmp - function compares two strings s1 and s2.
 *
 * @s1: LHS string to be compared
 * @s2: RHS string to be compared
 *
 * Return: integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
