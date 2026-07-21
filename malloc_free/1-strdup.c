#include "main.h"
#include <stdlib.h>

/**
* _strdup - Duplicates a string onto another
* @str: The string to dupe
*
* Return: NULL if string is 0
*/
char *_strdup(char *str)
{
	char *new_str;
	unsigned int index;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	new_str = malloc(sizeof(char) * (size + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (index < size)
	{
		new_str[index] = str[index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
