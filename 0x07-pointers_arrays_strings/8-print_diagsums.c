#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - printd the sum of two diagonals
 *
 * @a: input
 * @size: size of square matrix
 *
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int x;

	sum1 = 0;
	sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[x * size + 1];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum2 += a[x * size + (size - 1 - x)];
	}
	printf("%d, %d", sum1, sum2);
}
