#include "main.h"
/**
 * print_alphabet_x10 - a function to print the
 * alphabet
 * Description: simple alphabet function
 * a counter to perform the
 * function 10 times
 */

void print_alphabet_x10(void)
{
	char letter;
	int count;

	letter = 'a';
	count = 0;
	while (count <= 9)
	{
		count = count + 1;
		while (letter < 'z')
		{
			_putchar(letter);
			letter = letter + 1;
		}
		while (letter == 'z')
		{
			_putchar(letter);
			letter = 'a';
		}
	}
	_putchar('\n');
}
