#include "main.h"
/**
 * print_alphabet - a function to print the
 * alphabet
 * Description: simple alphabet function
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter = letter + 1;
	}
	_putchar('\n');
}
