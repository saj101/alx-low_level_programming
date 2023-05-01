#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the first node of the list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
