#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginningg of a list
 * @head: head of list
 * @n: data of node
 * Return: addredd of the new element or NULL.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;

	return (newnode);
}
