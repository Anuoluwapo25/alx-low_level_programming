#include "lists.h"

/**
 * delete_nodeint_at_index - delete at index
 *
 * @head: head pointer
 * @index: index to delete
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *pre;

	pre = *head;
	if (pre == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(pre);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (pre->next == NULL)
			return (-1);
		pre = pre->next;
	}
	temp = pre->next;
	pre->next = temp->next;
	free(temp);
	return (1);
}

