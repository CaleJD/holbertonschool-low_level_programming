#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 */
void more_numbers(void)
{
	int row;
	int number;

	row = 0;
	while (row < 10)
	{
		number = 0;
		while (number <= 14)
		{
			if (number > 9)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
			number++;
		}
		_putchar('\n');
		row++;
	}
}
