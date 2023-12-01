#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occurs.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	
	new_table->size = size;
	
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	if (new_table->array[0] == NULL)
	{
		free_list(new_table->array[0]);
		free(new_table->array);
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
/**
 * free_list - Frees a linked list.
 * @head: The head of the linked list.
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}

