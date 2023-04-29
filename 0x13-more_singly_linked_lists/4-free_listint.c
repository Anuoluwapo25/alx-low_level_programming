#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that free list
 * @head: head pointer
 * Return: address
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	for (temp = head; head != NULL; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
