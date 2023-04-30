#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: a pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++

		h = h->next;

	}

	return (num_nodes);
}
