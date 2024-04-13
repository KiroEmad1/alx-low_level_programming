#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to
 * @key: The key string (cannot be an empty string)
 * @value: The value associated with the key (can be an empty string)
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node = NULL, *temp = NULL;
    unsigned long int index;

    /* Check if the hash table, key, and value are not NULL */
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return 0;

    /* Get the index for the given key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists in the linked list at the index */
    temp = ht->array[index];
    while (temp != NULL)
    {
        /* If key exists, update the value and return */
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            if (temp->value == NULL)
                return 0;
            return 1;
        }
        temp = temp->next;
    }

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0;

    /* Duplicate the key and value strings */
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return 0;
    }
    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return 0;
    }

    /* Insert the new node at the beginning of the linked list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}

