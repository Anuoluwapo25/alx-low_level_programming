#include "lists.h"

/**
 * list_len - lenght of list
 * @h: list of node
 *
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
