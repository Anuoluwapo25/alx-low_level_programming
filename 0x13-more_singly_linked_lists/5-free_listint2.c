#include "lists.h"

/**
 * free_listint2 - function that prints
 * @head: pointer to pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	for (temp = *head; *head != NULL; *head = temp)
	{
		temp = (*head)->next;
		free(*head);
	}
	*head = NULL;
}


