#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * cap_string - function capitalises every firs letter of word
 *
 * @s: String to be used in function
 *
 * Return: char *s
 */
char *cap_string(char *s)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int len = strlen(s);
	int x;

	for (x = 0; x < len; x++)
	{
		if (strchr(separators, s[x]) != NULL)
		{
			if (isalpha(s[x + 1]) && islower(s[x + 1]))
			{
				s[x + 1] = toupper(s[x + 1]);
			}
		}
	}
	return (s);
}
