#include "hash_tables.h"

/**
 * hash_table_create - Function that create a hash table
 *
 * @size: size of array
 *
 * Return: Hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_new;
hash_new = malloc(sizeof(hash_table_t *));

if (hash_new == NULL)
{
return (NULL);
}
hash_new->size = size;
hash_new->array = malloc(sizeof(hash_node_t *) * size);

if (hash_new->array == NULL)
{
free(hash_new);
return (NULL);
}
return (hash_new);
}
