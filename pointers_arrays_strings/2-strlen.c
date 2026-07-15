#include "main.h"

/**
* _strlen - Gets the length of a variable and
* returns it
* @s: The string to count
* Return: the length
*/
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
