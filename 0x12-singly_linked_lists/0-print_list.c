#include "lists.h"

/**
 * print_list - function prints all the elements of a list
 * @h: structure to be printed
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		count++;
		printf("[%u] ", ptr->len);
		printf("%s\n", (ptr->str == NULL) ? "(nil)" : ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
