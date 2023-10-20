#include "main.h"
#include <string.h>

/**
 * leet - function encodes a string into 1337
 *
 * @s: Sting to be encoded.
 *
 * Return: *s
 */
char *leet(char *s)
{
	int len = strlen(s);
	int x;

	for (x = 0; x < len; x++)
	{
		if (s[x] == 'a' || s[x] == 'A')
		{
			s[x] = '4';
		}
		if (s[x] == 'e' || s[x] == 'E')
		{
			s[x] = '3';
		}
		if (s[x] == 'o' || s[x] == 'O')
		{
			s[x] = '0';
		}
		if (s[x] == 't' || s[x] == 'T')
		{
			s[x] = '7';
		}
		if (s[x] == 'l' || s[x] == 'L')
		{
			s[x] = '1';
		}
	}
	return (s);
}
