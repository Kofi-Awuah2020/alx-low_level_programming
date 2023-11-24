#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given index
 * @n: integer to be checked
 * @index: index of binary number
 *
 * Return: Value at index, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		/* if index is 1 return 1 else return 0 */
		return (n & (1 << index) ? 1 : 0);
	}
	else
	{
		return (-1);
	}
}
