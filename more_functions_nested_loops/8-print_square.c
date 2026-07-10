#include "main.h"

/**
 * print_square - Prints a square.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int row;
	int column;

	row = 0;
	while (row < size)
	{
		column = 0;
		while (column < size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}
	if (size <= 0)
		_putchar('\n');
}
