#include "main.h"

/**
 * _strcopy - Copies a string to a destination
 * @dest: Destination of copied string
 * @src: Source of string to copy
 * Return: Pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
