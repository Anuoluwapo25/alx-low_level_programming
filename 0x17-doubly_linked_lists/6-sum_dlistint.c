#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data in the list.
 * @head: head of list
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *main = head;
	int add = 0;

	while (main != NULL)
	{
		add += main->n;
		main = main->next;
	}
	return (add);
}
