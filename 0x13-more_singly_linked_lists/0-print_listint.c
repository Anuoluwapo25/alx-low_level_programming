#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_listint - function that print all list in struct
 * @h: head pointer
 *
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	size_t z;

	for (z = 0; h != NULL; z++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (z);
}
