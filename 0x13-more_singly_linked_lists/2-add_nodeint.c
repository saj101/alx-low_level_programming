#include "lists.h"

/**
 *add_nodeint - adds a new node at beginning of list
 *@head: pointer to pointer to head of the list
 *n: interger to be added to the new node
 *
 *Return: pointer to the new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
