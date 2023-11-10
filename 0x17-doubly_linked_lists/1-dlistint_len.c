#include "lists.h"
/**
 * dlistint_len - function that prints the number of elements in a list
 * @h: list
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

