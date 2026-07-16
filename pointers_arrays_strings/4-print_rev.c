#include "main.h"

/**
* print_rev - prints a string in reverse
* @s: string to print
*/
void print_rev(char *s)
{
	int currentLet;

	currentLet = '\0';
	while (str[currentLet] >= 0)
	{
		_putchar(str[currentLet]);
		currentLet--;
	}
	_putchar('\n');
}
