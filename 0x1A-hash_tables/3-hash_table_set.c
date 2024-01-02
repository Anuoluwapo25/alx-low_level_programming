#include "hash_tables.h"
/**
 * create_pair - creates a new ke
 * @key: the key
 * @value: the value 
 * Return: new 
 */
hash_node_t *create_pair(const char *key, const char *value)
{
	hash_node_t *new_pair = NULL;

	if (!key || !value || strlen(key) == 0)
	{
		return (NULL);
	}
	new_pair = malloc(sizeof(hash_node_t));
	if (new_pair == NULL)
		return (NULL);
	new_pair->key = strdup(key);
	if (new_pair->key == NULL)
	{
		free(new_pair);
		return (NULL);
	}
	new_pair->value = strdup(value);
	if (new_pair->value == NULL)
	{
		free(new_pair->key);
		free(new_pair);
		return (NULL);
	}
	new_pair->next = NULL; 

	return (new_pair);
}
/**
 * hash_table_set - adds an element
 * @ht: the hash tabl
 * @key: the key to add 
 * @value: the value
 * Return: 1 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_pair = NULL, *curr = NULL;
	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	new_pair = create_pair(key, value);
	if (new_pair == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size); 
	if (ht->array[index] == NULL)
		ht->array[index] = new_pair;
	else
	{
		curr = ht->array[index];
		for (; curr != NULL; curr = curr->next)
		{
			if (strcmp(curr->key, key) == 0)
			{
				free(curr->value);
				curr->value = strdup(value);
				if (curr->value == NULL)
				{
					free(new_pair->key);
					free(new_pair->value);
					free(new_pair);
					return (0);
				}
				free(new_pair->key);
				free(new_pair->value);
				free(new_pair);
				return (1);
			}
		}
		new_pair->next = ht->array[index];
		ht->array[index] = new_pair;
	}
	return (1);
}
