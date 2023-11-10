#include "lists.h"

/**
 * add_dnodeint_end - function that add node at the end of a list
 * @head: head of list
 * @n: data
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *main = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (main->next != NULL)
			main = main->next;
		main->next = new;
		new->prev = main;
	}
	return (new);
}

