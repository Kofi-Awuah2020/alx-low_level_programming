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

	len = strlen(str);
	for (x = 0; x < (len / 2); x++)
	{
		temp = *(str + x);
		*(str + x) = *(str + len - 1 - x);
		*(str + len - 1 - x) = temp;
	}
}
