#include "main.h"

/**
 * int _islower(int c) - Checks for lowercase character.
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
