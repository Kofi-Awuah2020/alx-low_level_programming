#include "main.h"
#include <string.h>

/**
 * rev_string - function reverses a string
 *
 * @s: String to be reversed
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int len;
	int x;
	char temp;

	len = strlen(s);
	for (x = 0; x < (len / 2); x++)
	{
		temp = *(s + x);
		*(s + x) = *(s + len - 1 - x);
		*(s + len - 1 - x) = temp;
	}
}
