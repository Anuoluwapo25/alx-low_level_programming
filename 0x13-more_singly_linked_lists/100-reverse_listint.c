#include "lists.h"

/**
 * reverse_listint - reserve node function
 *
 * @head: head pointer
 *
 * Return: pointer to firt node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *pre;
	listint_t *next;

	for (pre = *head; pre != NULL; pre = next)
	{
		next = pre->next;
		pre->next = temp;
		temp = pre;
		pre = next;
	}
	*head = temp;

	return (temp);
}
