#include "function_pointers.h"

/**
 * int_index - compares an int in an array
 * @array: array with ints to compare
 * @size: size of array
 * @cmp: pointer to func to compare ints
 * Return: 1 if func found matching int, -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 1 && i <= size)
			i++;

		if ((cmp(array[i]) == 1))
			return (i);
	}
	return (-1);
}
