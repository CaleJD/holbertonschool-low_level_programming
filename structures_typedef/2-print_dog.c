#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - Prints out the info for the dog struct
* @d: The pointer to the dog to print
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
