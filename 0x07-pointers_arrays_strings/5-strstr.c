#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be searched in
 * @needle: substring to be searched for
 *
 * Return: pointer to the beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y;
	int len = strlen(needle);

	if (*haystack == '\0' || *needle == '\0')
	{
		return (NULL);
	}
	for (x = 0; haystack[x] != '\0'; x++)
	{
		if (haystack[x] == *needle)
		{
			for (y = 0; y < len; y++)
			{
				if (haystack[x + y] != needle[y])
				{
					break;
				}
			}
			if (y == len)
			{
				return (haystack + x);
			}
		}
	}
	return (NULL);
}
