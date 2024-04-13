#include "hash_tables.h"

/**
 * key_index - Retrieves the index at which the key/value pair
 *             should be stored in the array of the hash table.
 * @key: The key string
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /* Get the hash value using the djb2 algorithm */
    unsigned long int hash_value = hash_djb2(key);

    /* Modulo the hash value by the size of the array to get the index */
    unsigned long int index = hash_value % size;

    return index;
}

