#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: Pointer value to be swapped
 * @b: Pointer value to be swapped
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
