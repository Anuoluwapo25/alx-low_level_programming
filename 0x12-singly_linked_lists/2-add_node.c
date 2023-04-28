#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node -  function that add node to the beginning
 *
 * @head: head of node
 * @str: string
 * Return: return adress
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node = NULL;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = strlen(str);
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
