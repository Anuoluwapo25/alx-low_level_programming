#include "lists.h"

/**
 * print_list - fumction for printing list
 *
 * @h: number of list
 *
 * Return: return number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else 
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
