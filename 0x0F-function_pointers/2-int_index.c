#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to be checked
 * @size:  number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: int_index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		cmp(array[x]);
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}
