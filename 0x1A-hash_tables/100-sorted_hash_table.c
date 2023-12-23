#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; ++i)
        ht->array[i] = NULL;

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Set a key/value pair in the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to insert
 * @value: The corresponding value
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current, *prev;
    unsigned long int index;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    index = key_index((unsigned char *)key, ht->size);

    current = ht->array[index];
    prev = NULL;

    while (current != NULL && strcmp(current->key, key) < 0)
    {
        prev = current;
        current = current->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;

    if (prev == NULL)
    {
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
    }
    else
    {
        prev->next = new_node;
        new_node->next = current;
    }

    /* Update sorted linked list */
    if (ht->shead == NULL)
    {
        ht->shead = new_node;
        ht->stail = new_node;
        new_node->sprev = NULL;
        new_node->snext = NULL;
    }
    else
    {
        current = ht->shead;
        prev = NULL;

        while (current != NULL && strcmp(current->key, key) < 0)
        {
            prev = current;
            current = current->snext;
        }

        if (prev == NULL)
        {
            new_node->snext = ht->shead;
            ht->shead->sprev = new_node;
            ht->shead = new_node;
        }
        else
        {
            new_node->snext = current;
            new_node->sprev = prev;
            prev->snext = new_node;

            if (current != NULL)
                current->sprev = new_node;
            else
                ht->stail = new_node;
        }
    }

    return (1);
}

/**
 * shash_table_print - Print the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    current = ht->shead;

    printf("{");

    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->snext;
        if (current != NULL)
            printf(", ");
    }

    printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;

    if (ht == NULL)
        return;

    current = ht->stail;

    printf("{");

    while (current != NULL)
    {
        printf("'%s': '%s'", current->key, current->value);
        current = current->sprev;
        if (current != NULL)
            printf(", ");
    }

    printf("}\n");
}

/**
 * shash_table_delete - Delete the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *current, *temp;

    if (ht == NULL)
        return;

    current = ht->shead;

    while (current != NULL)
    {
        temp = current;
        current = current->snext;
        free(temp->key);
        free(temp->value);
        free(temp);
    }

    free(ht->array);
    free(ht);
}

