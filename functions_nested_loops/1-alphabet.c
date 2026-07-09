#include "main.h"
/**
 *
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
	return (0);
}
