#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of backslashes to print.
 */
void print_diagonal(int n)
{
	int row;
	int space;

	row = 0;
	while (row < n)
	{
		space = 0;
		while (space < row)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		row++;
	}
	if (n <= 0)
		_putchar('\n');
}
