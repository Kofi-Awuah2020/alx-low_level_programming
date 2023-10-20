#include "main.h"
#include <string.h>

/**
 * leet - function encodes a string into 1337
 *
 * @s: String to be encoded.
 *
 * Return: *s
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char replacement[] = "4433007711";
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == letters[y])
			{
				s[x] = replacement[y];
			}
		}
	}
	return (s);
}
