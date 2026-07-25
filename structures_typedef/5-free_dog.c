#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Frees the memory used for dog_t
* @d: The Pointer to the struct to free
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
