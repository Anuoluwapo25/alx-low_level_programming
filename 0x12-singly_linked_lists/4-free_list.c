#include "lists.h"

/**
 * free_list - free memory space
 *
 * @head: new node
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *old;

	old = head;
	for (; head != NULL;)
	{
		head = head->next;
		free(old->str);
		free(old);
	}
}
