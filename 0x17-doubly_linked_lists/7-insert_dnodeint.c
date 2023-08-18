#include "lists.h"

/**
 * insert_dnodeint_at_index - function that insert node
 * @h: list
 * @idx: index at a position
 * @n: data
 * Return: address at node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int i;
	dlistint_t *main = *h;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new ==NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (main == NULL)
		{
			free(new);
			return (NULL);
		}
		main = main->next;
	}
	if (main == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = main->next;
	if (main->next != NULL)
		main->next->prev = new;
	new->prev = main;
	main->next = new;

	return (new);
}

		
