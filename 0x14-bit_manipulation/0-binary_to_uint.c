#include "main.h"

/**
 * int binary_to_uint - function converts a binary to an unsigned int
 * @b: pointer to the string of 0 and 1 chars
 * 
 * Return: converted number if success, 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int num = 0;

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1') /* Check if b[x] is not 0 or 1 */
		{
			return (0);
		}
		num = num * 2 + (b[x] - '0'); /* num * 2 & add ascii of b[x] */
	}
	return (num); /* return the result */
}
