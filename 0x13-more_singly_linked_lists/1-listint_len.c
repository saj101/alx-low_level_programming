#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked list
 *
 *@h: pointer to the head of the list
 *Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		n++;
		current = current->next;
	}
	return (n);
}
