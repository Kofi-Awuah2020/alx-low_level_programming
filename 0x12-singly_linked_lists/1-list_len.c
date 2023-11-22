#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list
 * @h: structure with elements to be counted
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

