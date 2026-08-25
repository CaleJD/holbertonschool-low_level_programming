#include "main.h"

/**
 * puts_half - Prints out second half of a string.
 * @str: String to print.
 */
void puts_half(char *str)
{
	int currentLet;
	int length;
	int isOdd;

	length = 0;
	isOdd = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
	{
		isOdd = length / 2;
		currentLet = isOdd;
		currentLet++;
	}
	else
	{
		currentLet = length / 2;
	}

	while (str[currentLet] != '\0')
	{
		_putchar(str[currentLet]);
		currentLet++;
	}
	_putchar('\n');
}
