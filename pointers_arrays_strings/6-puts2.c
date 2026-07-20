#include "main.h"

/**
* puts2 - prints out every other letter
* @str: string to print
*/
void puts2(char *str)
{
	int currentLet;
	int length;
	
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	currentLet = 0;
	while (currentLet < length)
	{
		_putchar(str[currentLet]);
		currentLet += 2;
	}
	_putchar('\n');
}
