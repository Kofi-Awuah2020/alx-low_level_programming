#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter \
 * on each element of an array.
 *
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int len = (int)size;
	int x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < len; x++)
		{
			action(array[x]);
		}
	}
}
