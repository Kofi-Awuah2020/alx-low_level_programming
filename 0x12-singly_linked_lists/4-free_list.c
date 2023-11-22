#include "lists.h"

/**
 * free_list - function frees a list
 * @head: pointer to the head of the list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
