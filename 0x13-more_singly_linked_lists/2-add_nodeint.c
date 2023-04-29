#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function for adding head
 * @head: head pointer
 * @n: variable
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (newnode->n == 0)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}


