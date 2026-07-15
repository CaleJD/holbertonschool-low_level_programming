#include "main.h"

/**
* _puts - prints out a string
* @str: string to print
*/
void _puts(char *str)
{
	int currentLet;
	
	currentLet = 0;
	while (str[currentLet] != '\0')
	{
		_putchar(str[currentLet]);
		currentLet++;
	}
	_putchar('\n');
}
