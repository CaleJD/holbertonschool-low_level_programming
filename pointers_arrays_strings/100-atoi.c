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
	int start;

	i = 0;
	newInt = 0;
	neg = 0;
	start = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			start = 1;
			/* Keep the value negative so INT_MIN does not overflow. */
			newInt = newInt * 10 - (s[i] - '0');
		}
		else if (start == 1)
			break;
		i++;
	}

	if (neg % 2 == 0)
		newInt = -newInt;

	return (newInt);
}
