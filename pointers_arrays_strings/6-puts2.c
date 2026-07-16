#include "main.h"

/**
* _puts - prints out every 2nd letter of a string
* @str: string to print
*/
void puts2(char *str)
{
        int currentLet;

        currentLet = 0;
        while (str[currentLet] != '\0')
        {
                _putchar(str[currentLet]);
                currentLet++;
		currentLet++;
        }
        _putchar('\n');
}
