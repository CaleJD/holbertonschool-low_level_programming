#include "hash_tables.h"

/**
 * hash_djb2 - Creates a hash value using the djb2 algorithm
 * @str: String to hash
 *
 * Return: Hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int character;

	hash = 5381;

	while ((character = *str++))
		hash = ((hash << 5) + hash) + character;

	return (hash);
}
