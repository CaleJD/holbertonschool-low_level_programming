#include "main.h"
#include <stdlib.h>

/**
* str_concat - Combines 2 strings into a new string
* @s1: 1st string
* @s2: 2nd string
* Return: The new string
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int index;
	char *new_str;
	unsigned int size;
	unsigned int size1;
	unsigned int size2;

	size1 = 0;
	size2 = 0;
	while (s1 != NULL && s1[size1] != '\0')
		size1++;
	while (s2 != NULL && s2[size2] != '\0')
		size2++;
	size = size1 + size2;
	new_str = malloc(sizeof(char) * (size + 1));
	if (new_str == 0)
		return (NULL);
	index = 0;
	while (s1 != NULL && *s1 != '\0')
	{
		new_str[index] = *s1;
		index++;
		s1++;
	}
	while (s2 != NULL && *s2 != '\0')
	{
		new_str[index] = *s2;
		index++;
		s2++;
	}
	new_str[index] = '\0';
	return (new_str);
}
