#include "main.h"

/**
 * print_array - print a certain number of ints in an array
 * @a: array of integers
 * @n: number of integers to print
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", (a[i]));
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
