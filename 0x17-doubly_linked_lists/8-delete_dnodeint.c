#include "lists.h"

/**
 * delete_dnodeint_at_index - funtions that deletes at a particular node
 * @head: head of node
 * @index: index of node to delete.
 * Return: 1 or -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *main;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	main = *head;
	if (index == 0)
	{
		*head = main->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(main);
		return (1);
	}
	for (i = 0; main != NULL && i < index; i++)
		main = main->next;
	if (main == NULL)
		return (-1);
	if (main->prev != NULL)
		main->prev->next = main->next;
	if (main->next != NULL)
		main->next->prev = main->prev;

	free(main);
	return (1);
}
