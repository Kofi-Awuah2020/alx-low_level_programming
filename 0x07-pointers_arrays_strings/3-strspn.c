#include "main.h"
#include <string.h>

/**
 * _strspn - function gets length of a prefix substring
 *
 * @s: string to be scanned.
 * @accept: pointer to characters to be matched.
 *
 * Return: the number of bytes in intial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int count = 0;
	int len = strlen(accept);

	for (x = 0; s[x] != '\0'; x++)
	{
		int flag = 0;

		for (y = 0; y < len; y++)
		{
			if (s[x] == accept[y])
			{
				count += 1;
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			break;
		}
	}
	return (count);
}
