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
	int x;

	for (x = 0; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			int calc = s1[x] - s2[x];

			return (calc);
		}
		else
		{
			return (0);
		}
	}
}
