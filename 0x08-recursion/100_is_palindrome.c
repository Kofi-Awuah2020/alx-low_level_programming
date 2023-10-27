#include "main.h"
#include <string.h>
/**
 * check - function checks if string is a palindrome
 * @str: pointer to string
 * @left: left index
 * @right: right index
 *
 * Return: 1 (Palindrom), 0 (Otherwise)
 */
int check(char *str, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (str[left] == str[right])
	{
		return (check(str, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - function returns 1 if string is a palidorme
 * @s: Pointer to string
 *
 * Return: 1 (Palindrome), 0 (Otherwise)
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	return (check(s, 0, length - 1));
}
