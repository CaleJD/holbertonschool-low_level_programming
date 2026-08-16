#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct hash_table - Hash table structure
 * @size: Size of the hash table array
 * @array: Array of bucket pointers
 */
typedef struct hash_table
{
	unsigned long int size;
	void **array;
} hash_table_t;

/**
 * struct hash_node - Hash table node
 * @key: Key
 * @value: Value associated with the key
 * @next: Pointer to the next node
 */
typedef struct hash_node
{
	char *key;
	char *value;
	struct hash_node *next;
} hash_node_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

#endif
