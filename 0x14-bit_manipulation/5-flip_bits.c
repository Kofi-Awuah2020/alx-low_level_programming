#include "main.h"
/**
 * flip_bits - function returns the number of bits needed to flip a number
 * @n: integer to be flipped
 * @m: integer to be fliiped
 *
 * Return: Number of bits required for the flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* XOR the two numbers to find Hamming Distance */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0; /* Initialise a counter */

	/* Loop until XOR becomes 0 */
	while (xor_result)
	{
		count += 1; /* Increment counter */

		/* Update xor_result by clearing the rightmost set bit */
		xor_result = xor_result & (xor_result - 1);
	}
	return (count); /* Return the count of set bits */
}
