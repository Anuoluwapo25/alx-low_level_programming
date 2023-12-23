#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: pointer 
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *pace = "";

	if (ht == NULL || ht->array == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size;  i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", pace, temp->key, temp->value);
			pace = ", ";
			temp = temp->next;
		}
	}
	puts("}");
}
