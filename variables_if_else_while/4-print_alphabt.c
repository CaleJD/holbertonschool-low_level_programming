#include <stdio.h>
/**
 * main - prints the alphabet
 * Description: The while loops prints current
 * letter and adds +1 to the value
 * unless it is q or e
 * then +1 without printing
 * Return: 0
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if ((letter == 'q') || (letter  == 'e'))
		{
			letter = letter + 1;
		}
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}
