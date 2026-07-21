#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars and
* initialises it with a specific char.
* Return: NULL if size of array is 0.
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index < size)
	{
		array[index] = c;
		index++;
	}
}
