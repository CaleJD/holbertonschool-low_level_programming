#include "main.h"

/**
* print_rev - Prints a string in reverse.
* @s: String to print.
*/
void print_rev(char *s)
{
	int currentLet;

	currentLet = 0;
	while (s[currentLet] != '\0')
	{
		currentLet++;
	}
	currentLet--;
	while (currentLet >= 0)
	{
		_putchar(s[currentLet]);
		currentLet--;
	}
	_putchar('\n');
}
