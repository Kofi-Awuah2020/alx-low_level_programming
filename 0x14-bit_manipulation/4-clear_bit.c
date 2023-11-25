#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: poinnter to integer
 * @index: index of bit to be set
 *
 * Return: 1 (Success), -1 (Fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Checks if index is within bounds of unsigned int */
	if (index < sizeof(unsigned long int) * 8) /* 8 gives sizeof int in bits */
	{
		/* Derefrence the pointer and update the value */
		*n &= ~(1UL << index); /* Typecasting the constant 1 to unsigned long */
		return (1);
	}
	else
	{
		return (-1);
	}
}
