#include "main.h"
#include <stdlib.h>

 /**
* array_range - Creates an array of integers from min to max
* @min: The minimum integer
* @max: The maximum integer
* Return: The array of organized integers
*/
int *array_range(int min, int max)
{
	int *array;
	int index;
	int size;

	if (min > max)
		return (NULL);
	size = max - min +1;
	array =  malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	index = 0;
	while (index <= size)
	{
		array[index] = min;
		index++;
		min++;
	}
	return array;
}
