#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @n: Number of elements of array to be printed
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int x;
	for (x = 0; x < n; x++)
	{
		printf("%d, ", *(a + x));
	}
	_putchar('\n');
}
