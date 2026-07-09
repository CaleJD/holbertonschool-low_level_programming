#include "main.h"

/**
 * _islower - Lowercase checker
 * @c: the character to check
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
