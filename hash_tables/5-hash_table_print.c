#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: Hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	const hash_node_t *node;
	int first;

	if (ht == NULL)
		return;
	printf("{");
	first = 1;
		index = 0;
	while (index < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (first == 0)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
		index++;
	}

	printf("}\n");
}
