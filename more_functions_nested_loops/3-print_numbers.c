#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9.
 */
void print_numbers(void)
{
	char digi;

	digi = '0';
	while (digi <= '9')
	{
		_putchar(digi);
		digi++;
	}
	_putchar('\n');
}
