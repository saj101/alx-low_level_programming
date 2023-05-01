#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: pointer to the first node
 *
 *Return: n or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	lisint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
