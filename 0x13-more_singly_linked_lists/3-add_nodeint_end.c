#include "lists.h"

/**
 * add_nodeint_end - function that add to the end of node
 * @head: head of node
 * @n: value of new node
 * Return: adress
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *temp;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;
	if (*head == NULL)
		*head = endnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
	}
	temp->next = endnode;

	return (endnode);
}
