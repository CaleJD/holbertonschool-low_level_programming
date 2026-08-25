#include "main.h"

/**
* puts_half - prints out half a string
* @str: string to print
*/
void puts_half(char *str)
{
	int currentLet;
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	length = length / 2;
	length++;
	currentLet = 0;
	while (currentLet < length)
	{
		_putchar(str[currentLet]);
		currentLet++;
	}
	_putchar('\n');
}
