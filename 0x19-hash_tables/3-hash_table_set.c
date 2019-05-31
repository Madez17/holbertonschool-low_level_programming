#include "hash_tables.h"

/**
 * hash_table_set - Function to add a new elemnt
 *
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 *
 * Return: success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    const unsigned char *keynew;
    hash_node_t *newNode;
    hash_node_t *aux;

    aux = ht->array[index];
    keynew = (const unsigned char *)key;
    index = key_index(keynew, ht->size);


    if (ht == NULL || value == NULL || key == NULL)
        return (0);
   
    while (aux != NULL)
    {
        if (strcmp(key,aux->key) == 0)
        {
            newNode->value = strdup(value);
            return (1);
        }
        aux = aux->next;
    }
    newNode = malloc(sizeof(hash_node_t*));
    newNode->key = strdup(key);
    newNode->value = strdup(value);
    newNode->next = ht->array[index];
    ht->array[index] = newNode;
    return (1);
}
