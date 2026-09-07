#include "function_pointers.h"

/**
 * array_iterator - iterates through an array and completes an action of each
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to func of action to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i <= size)
	{
		action(array[i]);
		i++;
	}
}
