#include "lists.h"

/**
 * listint_len - function that print lenght of node
 * @h: head pointer
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return(i);
}
