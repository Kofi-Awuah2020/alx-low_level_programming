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
	int main_sum;
	int second_sum;
	int x;

	main_sum = 0;
	second_sum = 0;

	for (x = 0; x < size; x++)
	{
		main_sum +=  a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		second_sum += a[x * size + (size - x - 1)];
	}
	printf("%d, %d", main_sum, second_sum);
}
