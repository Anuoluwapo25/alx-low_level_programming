#include "lists.h"

/**
 * insert_nodeint_at_index - function that returns at an index
 * @head: head pointer
 * @idx: nth position
 * @n: number
 * Return: nth node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int i = 0;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
