#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 * Return: Extracted integer
 */
int _atoi(char *s)
{
	int i;
	int newInt;
	int neg;

	i = 0;
	newInt = 0;
	neg = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			newInt = newInt * 10 + (s[i] - '0');
		}
		i++;
	}

	if (neg % 2 != 0)
		newInt = -newInt;

	return (newInt);
}
