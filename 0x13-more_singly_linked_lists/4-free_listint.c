#include "lists.h"

/**
 *free_listint - frees a list
 *@head: pointer to the list
 *
 *Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *next_node, *current;
	
	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
