#include "main.h"

/**
 * reverse_array - function reverses the content of an array of integers.
 *
 * @a: Array to be reversed.
 * @n: Number of elements in the array to be reversed.
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int x;
	int temp;

	for (x = 0; x < (n / 2); x++)
	{
		temp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = temp;
	}
}
