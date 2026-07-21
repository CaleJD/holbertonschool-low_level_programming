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

	if (str == 0)
	{
		return (NULL);
	}
	new_str = malloc(sizeof(str));
	if (new_str == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (str[index])
	{
		new_str[index] = str[index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
