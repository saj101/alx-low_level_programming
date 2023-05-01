#include "lists.h"

/**
 *free_listint - frees a list
 *@head: pointer to the list
 *
 *Return: returns a pointer to the node
 */
void free_listint(listint_t *head)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	while (*head == NULL)
		return (NULL);
	while (new_node == NULL)
		return (NULL);
	*head = new_node;

	new_node->n = n;
	new_node->next = NULL;

	free(new_node);
	return (new_node);
}
