#include "main.h"

/**
* puts2 - prints out every other letter
* @str: string to print
*/
void puts2(char *str)
{
	int currentLet;

	currentLet = 0;
	while (str[currentLet] != '\0')
	{
		_putchar(str[currentLet]);
		currentLet += 2;
	}
	_putchar('\n');
}
