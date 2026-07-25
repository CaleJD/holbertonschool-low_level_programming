#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates and initializes memory for an array
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to zeroed memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total;
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	memory = malloc(total);
	if (memory == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
