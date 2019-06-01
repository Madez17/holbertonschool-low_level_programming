#include "hash_tables.h"

/**
 * hash_table_get - Function retrieves a value associated
 *
 * @ht: pointer to array
 * @key: key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
const unsigned char *keynew;
hash_node_t *aux;

if (ht == NULL || key == NULL || strlen(key) == 0)
return (0);

keynew = (const unsigned char *)key;
index = key_index(keynew, ht->size);
aux = ht->array[index];

while (aux != NULL)
{
if (strcmp(key, aux->key) == 0)
{
return (aux->value);
}
aux = aux->next;
}
return (NULL);
}
