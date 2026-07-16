#include "main.h"

/**
* rev_string - Reverses a string.
* @s: The string to reverse.
*/
void rev_string(char *s)
{
	int right;
	int left;
	int length;
	char temp;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	left = 0;
	right = length - 1;
	while (left < right)
	{
		temp = s[right];
		s[right] = s[left];
		s[left] = temp;
		left++;
		right--;
	}
}
