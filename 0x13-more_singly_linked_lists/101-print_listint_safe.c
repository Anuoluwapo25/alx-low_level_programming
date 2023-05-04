#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

 /**
  * print_listint_safe - function tgat printd
  * @head: head pointer
  * Return: num nodes
  */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	const listint_t *next;

	for (nodes = 0; head != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		next = head;
		head = head->next;

		if (next <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (98);
		}
	}
	return (nodes);
}
