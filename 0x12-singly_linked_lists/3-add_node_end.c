#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* allocate memory for the new node */
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	/* fill in the fields of the new node */
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);

	new->next = NULL;

	/* if the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		/* traverse the list to find the last node */
		list_t *last = *head;

		while (last->next != NULL)
			last = last->next;

		/* add the new node after the last node */
		last->next = new;
	}

	return (new);
}
