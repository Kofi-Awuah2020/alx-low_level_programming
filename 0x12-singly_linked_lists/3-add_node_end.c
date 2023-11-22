#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of list
 * @head: pointer to the head of the list
 * @str: element of the structure
 *
 * Return: address of new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return  (new_node);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (new_node);
}
