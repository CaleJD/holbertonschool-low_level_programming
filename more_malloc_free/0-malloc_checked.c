#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - Allocates memory to given int
* @b: The int given to be given memory
* Return: The address of allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
