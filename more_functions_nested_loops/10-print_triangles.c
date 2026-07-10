#include "main.h"

/**
 * print_triangle - Prints a triangle
 * by decreasing the space and increasing
 * the hash with each new row
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	row = 1;
	while (row <= size)
	{
		space = size - row;
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		hash = 0;
		while (hash < row)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		row++;
	}
	if (size <= 0)
		_putchar('\n');
}
