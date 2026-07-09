#include <stdio.h>
/**
 * main - prints the alphabet in reverse
 * Description: The while loops prints current
 * letter and -1 to the value
 * Return: 0
 */

int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter = letter - 1;
	}
	putchar('\n');
	return (0);
}
