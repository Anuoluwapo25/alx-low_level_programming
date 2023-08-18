#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: head of list
 * @index: index of node to return
 * Return: the nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *main = head;
	unsigned int index_m = 0;

	while (main != NULL)
	{
		if (index_m == index)
			return (main);
		main = main->next;
		index_m++;
	}
	return (NULL);
}
