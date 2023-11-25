#include "main.h"

/**
 * get_endianness - function checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1; /* 00 00 00 01 */
	char *c = (char *) &num; /* Ptr to the first byte in the adress of num */

	/*if big endian memory will be stored as 00 00 00 01 */
	/* if little endian memory will be stored as 01 00 00 00 */
	if (*c) /* value will be 01 or 1 */
	{
		return (1);
	}
	else /* value of c will be 00 or 0 */
	{
		return (0);
	}
}
