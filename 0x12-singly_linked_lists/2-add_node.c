#include "lists.h"

/**
 * add_node - function adds a node at the beginning of a lists
 * @head: pointer to the head of the list
 * @str: element inside the structure
 *
 * Return: Adress of the new element or NULL is it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
