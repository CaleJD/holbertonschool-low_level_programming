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

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);

#endif
