#include "lists.h"
/**
 * free_dlistint - function that frees a lists
 * @head: head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *main = head;
	dlistint_t *next;

	while (main != NULL)
	{
		next = main->next;
		free(main);
		main = next;
	}
}
