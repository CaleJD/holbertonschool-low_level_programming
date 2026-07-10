#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of underscores to print.
 */
void print_line(int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
