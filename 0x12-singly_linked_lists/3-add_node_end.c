#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * *add_node_end - end to end of node
 * @head: head of node
 * @str: strin
 * Return: adress
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_new;
	list_t *old;

	n_new = malloc(sizeof(list_t));
	if (n_new == NULL)
		return (NULL);
	n_new->str = strdup(str);
	if (n_new->str == NULL)
	{
		free(n_new);
		return (NULL);
	}
	n_new->next = NULL;
	if (*head == NULL)
		*head = n_new;
	else
	{
		old = *head;
		while (old->next != NULL)
			old = old->next;
	}
	old->next = n_new;
	old->next->len = strlen(str);

	return (n_new);
}

