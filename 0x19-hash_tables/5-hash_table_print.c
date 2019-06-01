#include "hash_tables.h"

/**
 * hash_table_print - Function that imprint dictionary
 *
 * @ht: pointer to array
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int iter_array = 0, p = 1;
hash_node_t *aux;

printf("{");
while (iter_array < ht->size)
{
aux = ht->array[iter_array];

while (aux != NULL)
{
if (p == 1)
{
printf("'%s': '%s'", aux->key, aux->value);
aux = aux->next;
p = 0;
}
else
{
printf(", '%s': '%s'", aux->key, aux->value);
aux = aux->next;

}
}
iter_array++;
}
printf("}\n");

}
