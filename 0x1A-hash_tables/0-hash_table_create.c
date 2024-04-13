#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = NULL;

    /* Allocate memory for the hash table structure */
    hash_table = calloc(1, sizeof(hash_table_t));
    if (hash_table == NULL)
        return NULL;

    /* Allocate memory for the array */
    hash_table->array = calloc(size, sizeof(hash_node_t *));
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return NULL;
    }

    hash_table->size = size;

    return hash_table;
}
#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = NULL;

    /* Allocate memory for the hash table structure */
    hash_table = calloc(1, sizeof(hash_table_t));
    if (hash_table == NULL)
        return NULL;

    /* Allocate memory for the array */
    hash_table->array = calloc(size, sizeof(hash_node_t *));
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return NULL;
    }

    hash_table->size = size;

    return hash_table;
}

