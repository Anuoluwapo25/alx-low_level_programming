#include "lists.h"

/**
 * pop_listint - function that delete
 * @head: head pointer
 * Return: integer value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	(*head) = (*head)->next;
	free(temp);

	return (n);
}
