#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *next;

	if (ht == NULL)
		return;
	index = 0;
	while (index < ht->size)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
		index++;
	}

	free(ht->array);
	free(ht);
}